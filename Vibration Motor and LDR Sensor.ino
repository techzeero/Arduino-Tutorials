/*
    Vibration Motor and LDR Sensor
    For more details, visit: https://techzeero.com/arduino-tutorials/vibration-motor-with-arduino/
*/

int motorPin = 3;
int sensorPin = 0;
int sensorAmbient = 0;
int thresholdMargin = 100;

void setup()
{
  pinMode(motorPin, OUTPUT);
  sensorAmbient = analogRead(sensorPin);
  Serial.begin(9600);
}
void loop()
{
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if( sensorValue > sensorAmbient + thresholdMargin)
  {
    digitalWrite(motorPin, HIGH);  
  }
  else
  {
    digitalWrite(motorPin, LOW);  
  }  
}
