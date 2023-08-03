const express = require('express');
const fs = require('fs');
const path = require('path');

const app = express();
const dsaPath = path.join(__dirname, 'dsa');
const coaPath = path.join(__dirname, 'coa');

// Define a route to serve C program files
app.get('/dsa/:filename', (req, res) => {
  const { filename } = req.params;
  const filePath = path.join(dsaPath, filename + '.c');

  fs.readFile(filePath, 'utf8', (err, data) => {
    if (err) {
      // If the file is not found or there is an error reading the file, return a 404 response
      res.status(404).send('File not found');
    } else {
      // Set the Content-Type header to indicate that the response is a C program
      res.setHeader('Content-Type', 'text/x-c');
      res.send(data);
    }
  });
});

// Route to download coa files
app.get('/coa/:filename', (req, res) => {
  const { filename } = req.params;
  const filePath = path.join(coaPath, filename + '.asm');

  fs.readFile(filePath, (err, data) => {
    if (err) {
      // If the file is not found or there is an error reading the file, return a 404 response
      res.status(404).send('File not found');
    } else {
      // Set the Content-Type header to indicate that the response is a downloadable file
      res.setHeader('Content-Type', 'application/octet-stream');
      // Set the Content-Disposition header to make the browser download the file
      res.setHeader('Content-Disposition', `attachment; filename=${filename}.asm`);
      res.send(data);
    }
  });
});

// Start the server
const port = 3000;
app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});
