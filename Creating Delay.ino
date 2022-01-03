/*
      Creating Delay
      For more details, visit: https://techzeero.com/arduino-tutorials/delay-and-millis-in-arduino/
*/

long oneSecond = 1000;
long oneMinute = oneSecond * 60;
long oneHour = oneMinute * 60;
long oneDay = oneHour * 24;

void setup()
{
  Serial.begin(9600);  
}
void loop()
{
  Serial.println("delay for 1 millisecond");
  delay(1);
  Serial.println("delay for 1 second"); 
  delay(oneSecond);
  Serial.println("delay for 1 minute");
  delay(oneMinute);
  Serial.println("delay for 1 hour");
  delay(oneHour);
  Serial.println("delay for 1 day");
  delay(oneDay);
  Serial.println("Ready to start over"); 
} 
