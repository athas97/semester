int keyval;
char keypadPort at PORTD;
sbit LCD_RS at RB2_bit;
sbit LCD_EN at RB3_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISB2_bit;
sbit LCD_EN_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;

void main() {

  TRISB = 0x00;
  
  Lcd_Init();
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Cmd(_LCD_CURSOR_OFF);
  Lcd_Out(1,1,"KEYPAD INTERFACE");
  delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  delay_ms(500);
  
  Keypad_Init();
  Lcd_Out(1,1,"Press a Key");
  delay_ms(500);
  Lcd_Cmd(_LCD_CLEAR);
  do{
      keyval = 0;
      do{
        keyval = Keypad_Key_Click();
      }while(!keyval);
      
      switch(keyval)
      {
        case 1:keyval  = 55; break;  //7
        case 2: keyval = 52; break; // 4
        case 3: keyval = 49; break; // 1
        case 4: keyval = 32; break; // Space
        case 5: keyval = 56; break; // 8
        case 6: keyval = 53; break; // 5
        case 7: keyval = 50; break; // 2
        case 8: keyval = 48; break; // 0
        case 9: keyval = 57; break; // 9
        case 10: keyval = 54; break; // 6
        case 11: keyval = 51; break; // 3
        case 12: keyval = 61; break; // =
        case 13: keyval = 47; break; // /
        case 14: keyval = 42; break; // x
        case 15: keyval = 45; break; // -
        case 16: keyval = 43; break; // +
      }
      Lcd_Chr(1,2,keyval);
  }while(1);
}