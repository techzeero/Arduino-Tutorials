/*
   Push Button with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/how-to-use-a-push-button-switch-with-arduino/
*/

const int ledPin = 13;	// pin for the LED
const int inputPin = 2;	// input pin (for a pushbutton)

void setup()
{
  pinMode(ledPin, OUTPUT);	   //declare LED as output
  pinMode(inputPin, INPUT);	//declare pushbutton as input
}

void loop()
{
  int val = digitalRead(inputPin);	//read input value
  if (val == HIGH)	//check for input is HIGH
  {
    digitalWrite(ledPin, HIGH); //turn LED on if switch is pressed
  }
  else
  {
    digitalWrite(ledPin, LOW);	//turn LED off
  }
}
