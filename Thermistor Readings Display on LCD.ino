/*
   Interfacing Thermistor and LCD Display with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/thermistor-with-arduino/ 
 
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
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int ThermistorPin = 0;
int Vo;
float R1 = 1000;   // Resistor Value (We use 1 KOhms Resistor)
float logR2, R2, T, Tc, Tf;
float A = 1.009249522e-03, B = 2.378405444e-04, C = 2.019202697e-07;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (A + B*logR2 + C*logR2*logR2*logR2));
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0; 

  lcd.print("Temp: ");
  lcd.setCursor(0,1);
  lcd.print(Tc);
  lcd.print(" C; ");
  lcd.print(Tf);
  lcd.print(" F");   

  delay(500);
}
