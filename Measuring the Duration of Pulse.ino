/*
      Measuring the Duration of Pulse
      For more details, visit: https://techzeero.com/arduino-tutorials/delay-and-millis-in-arduino/
*/

int inputPin = 2; //pin for the switch

long val;

void setup()
{
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH); //turn on internal pull up on the inputPin
  Serial.begin(9600);
  Serial.println("Press and release switch");  
}
void loop()
{
  val = pulseIn(inputPin, LOW);
  if(val != 0)  //timeout returns 0
  {
    Serial.print("Switch pressed for ");
    Serial.print(val);
    Serial.println(" Microsecods");  
  }  
}
