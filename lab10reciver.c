void main()
{
	
	TRISB = 0;
	PORTB = 0;

	UART_Init(9600);
	delay_ms(100);

	while(1){
		if (UART1_Data_Ready())
		{
			PORTB = UART1_Read();
		}
	}

}