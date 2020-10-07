int i,j;
unsigned int number[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
 TRISB = 0;
 PORTB = 0;
 TRISC = 0;
 PORTC = 0;
 
 for(;;){
  for(j=0;j<10;j++){
  PORTC = number[j];
  for(i=0;i<10;i++){
      PORTB = number[i];
      delay_ms(500);
  }
 }
 }
}