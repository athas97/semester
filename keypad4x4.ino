#include <LiquidCrystal.h>
#include <Keypad.h>
const int rs = A0, en = A1, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS]={
  {'7','8','9','/'},
  {'4','5','6','*'},
  {'1','2','3','-'},
  {'#','0','=','+'}
};

byte rowPins[ROWS]={5,4,3,2};
byte colPins[COLS]={6,7,8,9};

Keypad keyp = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Keypad To Lcd");
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keyp.getKey();
  if(key){
    lcd.setCursor(0,1);
    lcd.print(key);
    }
  
}
