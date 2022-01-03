/*
      Millis Function in Arduino
      For more details, visit: https://techzeero.com/arduino-tutorials/delay-and-millis-in-arduino/
*/

int switchPin = 2;  //input pin
long startTime; //value return for millis when the switch is pressed
long duration;  //variable to store the duration

void setup()
{
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);  //turn on pull-up resistor
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(switchPin) == LOW)
  {
    //here if the switch is pressed
    startTime = millis();
    while(digitalRead(switchPin) == LOW); //wait while the switch is still pressed
    long duration = millis() - startTime;
    Serial.println(duration);  
  }    
}
