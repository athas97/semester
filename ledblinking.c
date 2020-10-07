unsigned char x=1;
void main() {
     TRISC = 0;

     while(1){
        PORTC = x;
        delay_ms(1000);
        x=x<<1;
        if(x==0){
        x=1;
        }
     }

}