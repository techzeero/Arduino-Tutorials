/*
   Responding to Change in Voltage
   For more details, visit: https://techzeero.com/arduino-tutorials/measure-voltage-with-arduino/
   
   By below resistor values you can measure voltage upto 25V
*/

long warningThreshold = 1200; 
long criticalThreshold = 1000;
const int batteryPin = 0;
const int ledPin = 13;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
  int val = analogRead(batteryPin);
  if (val < (warningThreshold * 1023L)/5000)
  {
    flash(val);
  }
}

void flash(int percent)   
{
  digitalWrite(ledPin, HIGH);
  delay(percent + 1);
  digitalWrite(ledPin, LOW);
  delay(100 - percent);
}
