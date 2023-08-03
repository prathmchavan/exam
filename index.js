const express = require('express');
const fs = require('fs');
const path = require('path');

const app = express();
const basePath = path.join(__dirname, 'dsa');

// Define a route to serve C program files
app.get('/dsa/:filename', (req, res) => {
  const { filename } = req.params;
  const filePath = path.join(basePath, filename + '.c');

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

// Start the server
const port = 3000;
app.listen(port, () => {
  console.log(`Server is running on http://localhost:${port}`);
});
