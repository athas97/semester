void main(){
	TRISB = 0xFF;
	PORTB = 0;

	UART_Init(9600);
	delay_ms(100);

	while(1){
		UART1_Write(PORTB);
		delay_ms(500);
	}
}