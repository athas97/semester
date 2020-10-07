int i;
unsigned int number[]={0x77,0x78,0x76,0x77,0x6D};
void main() {
  TRISB = 0;
  PORTB = 0;
  
  for(;;){
      for(i=0;i<5;i++){
      PORTB = number[i];
      delay_ms(300);
      }
  }
}