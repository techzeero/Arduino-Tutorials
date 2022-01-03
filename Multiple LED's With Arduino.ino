/* 
   Controlling Multiple LEDs With an Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/multiple-leds-blinking-using-arduino/
*/

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(7, LOW);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(6, HIGH);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(6, LOW);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(5, HIGH);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(5, LOW);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(4, HIGH);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(4, LOW);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(3, HIGH);
  delay(200);       // Wait for 200 millisecond(s)
  digitalWrite(3, LOW);
  delay(200);       // Wait for 200 millisecond(s)
}
