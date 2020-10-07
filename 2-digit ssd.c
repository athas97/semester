#define DIGIT1 PORTA.RA0
#define DIGIT2 PORTA.RA1

unsigned char display(unsigned char num){
  unsigned char pattern;
  unsigned char val[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  pattern = val[num];
  return pattern;
}
void main() {
unsigned char msd,lsd,number=67;
 TRISA = 0;
 TRISD = 0;
 DIGIT1 = 0;
 DIGIT2 = 0;
 
 while(1){
  msd = number/10;
  PORTD = display(msd);
  DIGIT2 = 1;
  delay_ms(500);
  
  lsd = number%10;
  PORTD = display(lsd);
  DIGIT1 = 1;
  delay_ms(500);
  
 }
}