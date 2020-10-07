void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int button = digitalRead(12);

  if(button == LOW)
  {
    digitalWrite(7,HIGH);
  }
  else
  {
    digitalWrite(7,LOW);
  }
  
}
