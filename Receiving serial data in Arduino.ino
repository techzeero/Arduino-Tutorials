/*
   Receiving serial data in Arduino (Serial communication in Arduino 3)
   For more details, visit: https://techzeero.com/arduino-tutorials/serial-communication-in-arduino/
*/

const int ledpin = 13;
int blinkRate = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}
void loop()
{
  if ( Serial.available())
  {
    char ch = Serial.read();
    if( ch >= '0' && ch <= '9')
    {
      blinkRate = (ch - '0');
      blinkRate = blinkRate * 100;
    }
  }
blink();
}
void blink()
{
  digitalWrite(ledpin, HIGH);
  delay(blinkRate);
  digitalWrite(ledpin, LOW);
  delay(blinkRate);
}
