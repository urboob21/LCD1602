#include "LCD_4.h" 

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
		LCD_CMD=(LCD_CMD&0x0F)|(cmd&0xF0);
	LCD_RS=0;

	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(10);	
	
	LCD_CMD=(LCD_CMD&0x0F)|((cmd&0x0F)<<4);
	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(2);	
}


void LCD_SendChar(unsigned char char_data)
{
	LCD_CMD=(LCD_CMD&0x0F)|(char_data&0xF0);
	LCD_RS=1;
	
	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(10);	
	
	LCD_CMD=(LCD_CMD&0x0F)|((char_data&0x0F)<<4);
	LCD_E=1;
	delay_ms(1);	 //thoi gian delay xem o datasheet
	LCD_E=0; 
	delay_ms(2);	
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
		LCD_SendCommand(0x02);
		LCD_SendCommand(0x28);  //mode 8bit,2 dong
		
		LCD_SendCommand(0x0C);	//bat hien thi, tat con tro
		LCD_SendCommand(0x01);  // xoa noi dung hien thi tren lcd
		delay_ms(2);	
}