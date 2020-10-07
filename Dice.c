void main()
{

 TRISC=0;
 TRISB=1;
 PORTC=0;

 while(1)
 {
   if(PORTB.F0 == 0)
   {
    PORTC = 0x08; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(1000); //1 Second Delay

    PORTC = 0x22; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(1000); //1 Second Delay

    PORTC = 0x2A; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(1000); //1 Second Delay

    PORTC = 0x55; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(1000); //1 Second Delay

    PORTC = 0x5D; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(1000); //1 Second Delay

    PORTC = 0x77; //LED ON
    Delay_ms(1000); //1 Second Delay
    PORTC = 0x00; //LED OFF
    Delay_ms(3000); //3 Second Delay
    }

   else
   {
    PORTC=0;
   }
 }


}
