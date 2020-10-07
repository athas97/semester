void rotation0(){
  unsigned int i;
  for(i=0;i<50;i++){
  PORTB.F0=1;
  delay_ms(800);
  PORTB.F0=0;
  delay_ms(19200);
  }
}
 void rotation1(){
  unsigned int i;
  for(i=0;i<50;i++){
  PORTB.F0=1;
  delay_ms(1500);
  PORTB.F0=0;
  delay_ms(18500);
  }
}
 void rotation2(){
  unsigned int i;
  for(i=0;i<50;i++){
  PORTB.F0=1;
  delay_ms(2200);
  PORTB.F0=0;
  delay_ms(17800);
  }
}

void main() {

     TRISB = 0;
     PORTB = 1;

     while(1){
         rotation0();
         delay_ms(2000);
         rotation1();
         delay_ms(2000);
         rotation2();
         delay_ms(2000);
     }

}