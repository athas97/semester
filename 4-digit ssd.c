#define DIGIT1 PORTA.RA0
#define DIGIT2 PORTA.RA1
#define DIGIT3 PORTA.RA2
#define DIGIT4 PORTA.RA3

unsigned char display(unsigned char num){
  unsigned char pattern;
  unsigned char val[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
  pattern = val[num];
  return pattern;
}

void main() {
   unsigned int msd,lsd,midl,midr,number=1997;
   
   TRISA = 0;
   TRISD = 0;
   DIGIT1 = 0;
   DIGIT2 = 0;
   DIGIT3 = 0;
   DIGIT4 = 0;
   
   while(1){
    msd = number/1000;
    PORTD = display(msd);
    DIGIT4 = 1;
    delay_ms(500);
    DIGIT4 = 0;
    midl = number/100;
    midl = midl % 10;
    PORTD = display(midl);
    DIGIT3 = 1;
    delay_ms(500);
    DIGIT3 = 0;
    midr = number/10;
    midr = midr % 100;
    PORTD = display(midr);
    DIGIT2 = 1;
    delay_ms(500);
    DIGIT2 = 0;
    lsd = number%1000;
    PORTD = display(lsd);
    DIGIT1 = 1;
    delay_ms(500);
    DIGIT1 = 0;
   }
}