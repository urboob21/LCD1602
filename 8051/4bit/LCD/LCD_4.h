#ifndef _LCD4_H
#define _LCD4_H
//-------------------------DESCRIPTION--------------------------- (describe)
//mode 4 bit toi uu: RW - GND
 
 
//--------------------KHAI BAO THU VIEN
#include "main.h"	
#include <stdlib.h>
#include <string.h>
//--------------------KHAI BAO CAC BIEN MARCO DEFINE
#define LCD_RS 	P1_0
#define LCD_E 	P1_2
#define LCD_CMD P2

//--------------------KHAI BAO CAC HAM
void delay_ms(unsigned int t);
void LCD_SendCommand(unsigned char cmd);
void LCD_SendChar(unsigned char char_data);
void LCD_SendString(char *str);
void LCD_Init();
#endif