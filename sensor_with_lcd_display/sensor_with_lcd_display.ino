#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 7  // CAN DO WITH int DHTPIN 7
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();

}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(h);
  if(t>20){
  lcd.setCursor(0,1);
  //lcd.print("Temparature:");
  lcd.print("Warmed");
  }
  else{
    lcd.setCursor(0,1);
  //lcd.print("Temparature:");
  lcd.print("Cold");
    }

}
