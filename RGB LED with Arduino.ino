/* 
   How to use an RGB LED with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/how-to-use-an-rgb-led-with-arduino/
*/

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(6, LOW);
}
