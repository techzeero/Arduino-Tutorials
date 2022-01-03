/* 
   LDR Sensor with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/ldr-with-arduino/
*/
int sensorPin = A0;

void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(100);
}
