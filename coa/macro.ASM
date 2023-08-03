

;Practical-2
;Title :-Program using MACRO
;Aim :- Write 8086 Assembly Language Program
      ;to display personal information using MACRO



DISPLAY MACRO MSG    ;Defining a macro,to display a string
     LEA DX, MSG
     MOV AH, 09H
     INT 21H
ENDM

DATA SEGMENT
     MSG1 DB 10,13, "**********************$"
     MSG2 DB 10,13, "NAME:-SUCHIT CHAUDHARI $"
     MSG3 DB 10,13, "ROLL NO.:-38 $"
     MSG4 DB 10,13, "CLASS:-SE  $"
     MSG5 DB 10,13, "COLLEGE NANE:-SSBT $"
     MSG6 DB 10,13, "MOBILE NO.:- 8421519054 $"
     MSG7 DB 10,13, "**********************$"
DATA ENDS

CODE SEGMENT
   ASSUME CS:CODE,DS:DATA

   MOV AX, DATA     ;Store start address of data segment in AX register
   MOV DS,AX        ;Initializing DS register,i.e. DS register contains
                    ;Start address of data segment


   DISPLAY MSG1     ;Calling a macro, to display string
   DISPLAY MSG2
   DISPLAY MSG3
   DISPLAY MSG4
   DISPLAY MSG5
   DISPLAY MSG6
   DISPLAY MSG7

   MOV AH,4CH       ;Terminate the program
   INT 21H

CODE ENDS
END

;Output:-
;
**********************
;
NAME:-SUCHIT CHAUDHARI 
;
ROLL NO.:-38 
;
CLASS:-SE  
;
COLLEGE NANE:-SSBT 
;
MOBILE NO.:- 8421519054 
;
**********************

