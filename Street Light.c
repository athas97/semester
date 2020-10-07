int light;
unsigned int adcval = 0;
void main() {
     TRISC = 0;
     PORTC = 0;
     ADC_Init();
     
     while(1){
        adcval = ADC_Read(0);
        light = 100 - adcval/10.24;
        
        if(light >= 80){
             PORTC.RC1 = 0;
        }else{
             PORTC.RC1 = 1;
        }
     }
}