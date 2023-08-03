Name:- Yash Sunil Jadhav.
Roll no.:- 61		Div.:- A
Batch:- A3			DOP:- 03-02-23


;Program-1
;Title :- To Display the string

DATA SEGMENT
        MSG DB 'My Mother is my God *****......$'
DATA ENDS

CODE SEGMENT
        ASSUME CS:CODE,DS:DATA

        MOV AX,DATA        ;store start address of data segment in AX register
        MOV DS,AX          ;Initialization of DS register
                           ;i.e. DS Register contains start address`
                           ;of data segment



        MOV DX,OFFSET MSG      ;To display a message
        MOV AH,09H
        INT 21H

        MOV AH,4CH             ;To terminate a program and
        INT 21H                ;return back to OS
CODE ENDS
END

;Output:-
;My Mother is my God *****......
