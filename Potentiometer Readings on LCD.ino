/*
   Display Potentiometer Readings on LCD Display
   For more details, visit: https://techzeero.com/arduino-tutorials/display-potentiometer-readings-on-lcd-display/

 The circuit:
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
 
  Second Potentiometer connection with Arduino
 * Potentiometer 5v to Arduino 5v
 * Potentiometer GND to Arduino GND
 * Potentiometer Wiper/Vout to Arduino A0(Analog pin 0)
*/

// include the library code:
#include <LiquidCrystal.h>
int sensorValue = 0;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  pinMode(A0, INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() 
{
  // read the input on analog pin 0:
  sensorValue = analogRead(A0);
  // set the cursor to column 0, line 0:
  lcd.setCursor(0, 0);
  // print out the value at LCD Display:
  lcd.print(sensorValue);
  // print out the value at Serial Monitor:
  Serial.println(sensorValue);
  delay(1000);
  lcd.clear();  
}
