#include "DHT.h"
#include <Adafruit_Sensor.h>

#define DHTPIN 8
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE); 

int FAN=7;

void setup()
{
    Serial.begin(9600);
    pinMode(FAN, OUTPUT);
}

void loop()
{
  delay(2000);
 float h = dht.readHumidity();
 // Check if any reads failed and exit early (to try again).
  if (isnan(h)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
 Serial.println(h);
  
  if(h>=75)
  {
    digitalWrite(FAN,HIGH);
  }
  else
  {
    digitalWrite(FAN,LOW);
  }
  
  delay(500);
}
