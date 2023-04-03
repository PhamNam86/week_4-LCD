#include <16f887.h> 
#device *=16 ADC=8
#FUSES NOWDT, HS, NOPUT, NOBROWNOUT,NOPROTECT, NOLVP 
#use delay(clock=16M)
#include <luutinh.h>
#include <LCD.h>
void Button1();
void main ()
{
	set_tris_b(0x00); 
	set_tris_d(0x00); 
	set_tris_a(0x11); 

	output_b(0x00);	
	LCD_INIT();

	lcd_gotoxy(4,1);
	printf(lcd_putc,"Ho ten",);
	lcd_gotoxy(5,2);
	printf(lcd_putc,"LOP",);
	while(TRUE)
{
if(input(pin_a3)==0)
{
Button1();
}
}

}
void Button1()
{
while(input(pin_a3)==0){}
OUTPUT_B(0X11);
delay_ms(500);

while(input(pin_a3)==1){}
OUTPUT_B(0X00);
delay_ms(500);
}