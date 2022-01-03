/*
   LED Blinking Control by Potentiometer
   For more details, visit: https://techzeero.com/arduino-tutorials/led-blinking-control-by-potentiometer/

   Blink an LED at a rate set by the position of a potentiometer
*/
const int potPin = 0; // select the input pin for the potentiometer
const int ledPin = 5; // select the pin for the LED
int val = 0; // variable to store the value coming from the sensor
void setup()
{
  pinMode(ledPin, OUTPUT); // declare the ledPin as an OUTPUT
  Serial.begin(9600);
}
void loop() 
{
  val = analogRead(potPin); // read the voltage on the pot
  digitalWrite(ledPin, HIGH); // turn the ledPin on
  delay(val); // blink rate set by pot value (in milliseconds)
  digitalWrite(ledPin, LOW); // turn the ledPin off
  delay(val); // turn led off for same period as it was turned on
  Serial.println(val);
}
