
void main(){
int i;
  TRISC = 0;
  while(1){
   for( i=0;i<3;i++){
     PORTC.RC0 = 1;
     delay_ms(200);
     PORTC.RC0 = 0;
     delay_ms(200);
   }
   delay_ms(2000);
  }
}