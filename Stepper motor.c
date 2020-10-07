void main() {
  TRISD = 0b00000000;
  PORTD = 0b11111111;
  
  while(1){
    PORTD = 0b00000001;
    delay_ms(100);
    PORTD = 0b00000010;
    delay_ms(100);
    PORTD = 0b00000100;
    delay_ms(100);
    PORTD = 0b00001000;
    delay_ms(100);
  }
}