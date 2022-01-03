/*
   Serial communication in Arduino 1
   For more details, visit: https://techzeero.com/arduino-tutorials/serial-communication-in-arduino/
*/

void setup()
{
  Serial.begin(9600);   //send and receive at 9600 baud
}
int number = 0;
void loop()
{
  Serial.print("This number is ");
  Serial.println(number);   //print the number

  delay(500);   //delay half second between numbers
  number++;   //to the text number
}
