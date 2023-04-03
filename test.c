#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=16M) 
#include<luutinh.h>
void main()
{

set_tris_b(0b00000000); // khai b?o porth La là output,
set_tris_a(0b11111111), 
set_tris_d(0b00000000); 
output_b(0x00); 
output_high(pin_b0); 
output_low(pin_b1); 
output_high(pin_b2); 
output_low(pin_b3); 
output_high(pin_b4) ;
output_low(pin_b5);
output_high(pin_b6); 
output_low(pin_b7);

//output_b(0x55);
}