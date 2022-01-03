/*
  Ultrasonic sensor readings on an LCD Display 16x2. 
  For More Details: https://techzeero.com/arduino-tutorials/ultrasonic-sensor-with-arduino/
  
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

int trigPin = 9; // Trigger Pin of Ultrasonic Sensor
int echoPin = 8; // Echo Pin of Ultrasonic Sensor

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() 
{
  long duration, inches, cm;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  inches = duration/74 /2;  //convert microseconds into inches
  cm = duration/29 /2;    //convert microseconds into cm
  
  lcd.setCursor(0, 0);
  lcd.print(inches);
  lcd.print("inches ");
  lcd.setCursor(0, 1);
  lcd.print(cm);
  lcd.print("cm");
}
