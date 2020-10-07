sbit LCD_RS at RC1_bit;
sbit LCD_EN at RC2_bit;
sbit LCD_D4 at RC4_bit;
sbit LCD_D5 at RC5_bit;
sbit LCD_D6 at RC6_bit;
sbit LCD_D7 at RC7_bit;

sbit LCD_RS_Direction at TRISC1_bit;
sbit LCD_EN_Direction at TRISC2_bit;
sbit LCD_D4_Direction at TRISC4_bit;
sbit LCD_D5_Direction at TRISC5_bit;
sbit LCD_D6_Direction at TRISC6_bit;
sbit LCD_D7_Direction at TRISC7_bit;

unsigned int adcresult = 0;
float pressure;
unsigned char txt[15];

void main() {
   TRISA.RA0 = 1;
   ADC_Init();
   Lcd_Init();
   Lcd_Cmd(_LCD_CLEAR);
   Lcd_Cmd(_LCD_CURSOR_OFF);
   Lcd_Out(1,1,"Pressure:");
   
   while(1){
    adcresult = ADC_Read(0);
    pressure = (adcresult * 5.0)/1023;
    pressure = (pressure + 0.475)/0.0475;
    floattostr(pressure,txt);
    Lcd_Out(2,2,txt);
    delay_ms(500);
   }
}