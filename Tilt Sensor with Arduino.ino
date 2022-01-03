/*
   Tilt Sensor with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/tilt-sensor-with-arduino/
*/


int tiltSensorPin = 2;    //Pin for tilt sensor 
int notTiltLED = 7;       //Pin for Not Tilt Output LED
int TiltLED = 6;          //Pin for Tilt Output LED

void setup()
{
    pinMode(tiltSensorPin, INPUT);    
    digitalWrite(tiltSensorPin, HIGH);  //Pull-up resistor

    pinMode(notTiltLED, OUTPUT);
    pinMode(TiltLED, OUTPUT);
}
void loop()
{
  if(digitalRead(tiltSensorPin))  //check if the pin is high
  {
    digitalWrite(notTiltLED, HIGH);
    digitalWrite(TiltLED, LOW);
  }
  else
  {
    digitalWrite(notTiltLED, LOW);
    digitalWrite(TiltLED, HIGH);
  }
}
