#include "LCD_8.h" 

///--------new var or extern from main

//description funtion
	void delay_ms(unsigned int t)
	{
		unsigned int i,j;
		for(i=0;i<t;i++)
		for(j=0;j<125;j++);
	}

void LCD_SendCommand(unsigned char cmd)
{
	LCD_RW=0;
	LCD_RS=0;
	LCD_CMD=cmd;
	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(3);	
}

void LCD_SendChar(unsigned char char_data)
{
	LCD_RW=0;
	LCD_RS=1;
	LCD_CMD=char_data;
	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(3);
}

void LCD_SendString(char *str)
{
	int i;
	for(i=0;str[i]!=0;i++)
	{
		LCD_SendChar(str[i]);
	}
}

void LCD_Init()
{
		LCD_SendCommand(0x38);  //mode 8bit,2 dong
		LCD_SendCommand(0x0C);	//bat hien thi, tat con tro
		LCD_SendCommand(0x01);  // xoa noi dung hien thi tren lcd
			
}
