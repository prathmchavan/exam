
;Practical-04
;AIM:-Multiplication of two 8-bit hex numbers using NEAR procedure
;-----------------------------------------------------------

DATA SEGMENT
        NO1 DB 0FFH
        NO2 DB 0FFH
 	HEX_CHART DB '0123456789ABCDEF'
	LSB_OF_RESULT DB ?
 	MSB_OF_RESULT DB ?
 	H_ATTACH DB 'H'
 	MSG DB 'RESULT IS :- $'
DATA ENDS
CODE SEGMENT
 	ASSUME CS:CODE,DS:DATA
 	MOV AX,DATA
 	MOV DS,AX ;Initialization of DS register
 	LEA DX,MSG
 	MOV AH,09H
 	INT 21H
 	MOV AL,NO1
 	MOV BH,NO2
 	MUL BH 		; AX = BH * AL
 				; AH stores most significand byte and
				; AL stores least significand byte
 	MOV MSB_OF_RESULT,AH
 	MOV LSB_OF_RESULT,AL
 	MOV AL,MSB_OF_RESULT
 	AND AL,0F0H
 	MOV CL,04H
 	ROR AL,CL
 	CALL DISP_CHAR 	;Call near procedure to display
 				;Most Significant Digit of Most Significant 				;byte
 	MOV AL,MSB_OF_RESULT
 	AND AL,0FH
 	CALL DISP_CHAR 	;Call near procedure to display
 				;Least Significant Digit of Most 						;Significant byte
 	MOV AL,LSB_OF_RESULT
 	AND AL,0F0H
 	MOV CL,04H
 	ROR AL,CL
 	CALL DISP_CHAR 	;Call near procedure to display
 				;Most Significant Digit of Least 						;Significant byte
	MOV AL,LSB_OF_RESULT
	AND AL,0FH
 	CALL DISP_CHAR 	;Call near procedure to display
 				;Least Significant Digit of Least 						;Significant byte
 	MOV DL,H_ATTACH ;To display H in result
 	MOV AH,02H
 	INT 21H
 	JMP LAST
 DISP_CHAR PROC NEAR 	;To define Near procedure,to display a 					;character
	MOV BX,00H
	MOV BL,AL
 	MOV DL,HEX_CHART[BX]
 	MOV AH,02H
 	INT 21H
 	RET
 DISP_CHAR ENDP
 LAST:MOV AH,4CH ; To terminate a program
 INT 21H
CODE ENDS
END       


;Output:-
;RESULT IS:- FE01
