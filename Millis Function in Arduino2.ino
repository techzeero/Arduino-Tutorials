/*
      Millis Function in Arduino
      For more details, visit: https://techzeero.com/arduino-tutorials/delay-and-millis-in-arduino/
*/

int ledPin = 13;
int ledState = LOW;
long previousMillis = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  
}
void loop()
{
  Serial.println(millis() / 1000);
  myDelay(4000);  
}
void myDelay(unsigned long duration)
{
  unsigned long start = millis();
  while(millis() - start <= duration)
  {
    blink(100);  
  }
}

void blink(long interval)
{
  if(millis() - previousMillis > interval)
  {
    previousMillis = millis();
    if(ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;
     digitalWrite(ledPin, ledState); 
  }  
}
