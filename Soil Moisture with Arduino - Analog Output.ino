/*
   Soil Moisture with Arduino - Analog Output
   For more details, visit: https://techzeero.com/arduino-tutorials/soil-moisture-sensor-arduino/
*/

int sensorPin = A0;
int outputValue ;

void setup() 
{
   Serial.begin(9600);
   Serial.println("Reading Data From the Sensor ...");
   delay(2000);
}

void loop()
{
   outputValue= analogRead(sensorPin);
   outputValue = map(outputValue,550,0,0,100);
  
   Serial.print("Moisture Value : ");
   Serial.print(outputValue);
   Serial.println("%");
   delay(1000);
}
