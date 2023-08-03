

;Practical-5
;AIM:-Addition of two 8-bit hex numbers using FAR procedure
;-----------------------------------------------------------

DATA SEGMENT
       NO1             DB 12H
       NO2             DB 35H
       HEX_CHART       DB '0123456789ABCDEF'
       STORE_ADDITION  DB ?
       H_ATTACH        DB 'H'
       MSG             DB 'RESULT IS:- $'
DATA ENDS

CODE SEGMENT
       ASSUME CS:CODE,DS:DATA

       MOV AX,DATA
       MOV DS,AX        ;Initialization of DS Register

       LEA DX,MSG
       MOV AH,09H
       INT 21H

       MOV AL,NO1
       ADD AL,NO2       ;Addition of two numbers. Result in AL register
       MOV AH,00H
       ADC AH,00H       ;Carry is stored in AH register
       MOV STORE_ADDITION,AL

       MOV AL,AH
       CALL FAR PTR DISP_CHAR   ;Call FAR procedure to display carry

       MOV AL,STORE_ADDITION
       AND AL,0F0H
       MOV CL,04H
       ROR AL,CL
       CALL FAR PTR DISP_CHAR   ;Call far procedure to display most
                                ;significant digit of result

       MOV AL,STORE_ADDITION
       AND AL,0FH
       CALL FAR PTR DISP_CHAR   ;Call far procedure to display least
                                ;significant digit of result

       MOV DL,H_ATTACH     ;To display H in result
       MOV AH,02H
       INT 21H

       MOV AH,4CH
       INT 21H       ;To terminate a program
CODE ENDS

CODE_FAR SEGMENT
       ASSUME CS:CODE_FAR,DS:DATA


    DISP_CHAR PROC FAR     ;To define far procedure for
                           ;displaying a character

       MOV BX,00H
       MOV BL,AL
       MOV DL,HEX_CHART[BX]
       MOV AH,02H
       INT 21H
       RET
    DISP_CHAR ENDP

CODE_FAR ENDS
END


;Output:-
;RESULT IS:- 047H
       

