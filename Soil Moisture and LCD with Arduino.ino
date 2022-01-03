/*
   Soil Moisture and LCD with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/soil-moisture-sensor-arduino/
   
  LCD circuit:
   * LCD RS pin to digital pin 12
   * LCD Enable pin to digital pin 11
   * LCD D4 pin to digital pin 5
   * LCD D5 pin to digital pin 4
   * LCD D6 pin to digital pin 3
   * LCD D7 pin to digital pin 2
   * LCD R/W pin to ground
   * LCD VSS pin to ground
   * LCD VCC pin to 5V
   * 10K resistor:
   * ends to +5V and ground
   * wiper to LCD VO pin (pin 3)
*/

#include <LiquidCrystal.h>

int sensorPin = A0;
int outputValue ;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Reading Data From the Sensor ...");
  delay(2000);
}

void loop()
{
  outputValue= analogRead(sensorPin);
  outputValue = map(outputValue,550,0,0,100);
  
  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(outputValue);
  lcd.print("%");
  delay(1000);
  lcd.clear();
}
