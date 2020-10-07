void setup() {
  // put your setup code here, to run once:
  for (int i = 2; i <= 12; i++)
    pinMode(i, OUTPUT);   

}
const int number[11] = {0b0000001,0b1001111,0b0010010,0b0000110,0b1001100,0b0100100,0b0100000,0b0001111,0b0000000,0b0001100};
const int digit[4] = {2,3,4,5};
void loop() {
  // put your main code here, to run repeatedly:
  int lsd,mid,msd;
 for(int i=0;i<999;i++){
  if(i == 0){
    showdigit(0,0);
    delay(500);
  }else if(i < 10){
     lsd = i%10;  
     showdigit(lsd,0);     
     delay(500);
  }else if(i >= 10){
    mid = i/10;
    showdigit(mid,1);
    lsd = i%10;  
    showdigit(lsd,0);
    delay(500);
  }else if(i >= 100){
    msd = i/100; 
    showdigit(msd,2);
    mid = i/10;
    showdigit(mid,1);
    lsd = i%10;  
    showdigit(lsd,0);
    delay(500); 
  }          
  }
}
void showdigit(int num,int dig){
  int a;
  digitalWrite(digit[dig],HIGH);
    for(int i=6,a=0;i<=12;i++,a++){
     digitalWrite(i,bitRead(number[num],a));
    }
    delay(15);
   digitalWrite( digit[dig], LOW );
  }
