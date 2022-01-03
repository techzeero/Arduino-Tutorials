/*
   Soil Moisture with Arduino - Digital Output
   For more details, visit: https://techzeero.com/arduino-tutorials/soil-moisture-sensor-arduino/
*/

int sensorPin = 7;
int ledPin = 13;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  Serial.println("Reading Data From the Sensor ...");
  delay(2000);
}

void loop()
{
  if(digitalRead(sensorPin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
}
