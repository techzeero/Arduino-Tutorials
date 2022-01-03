/*
    DC Motor with Arduino Code 1
    For more details, visit: https://techzeero.com/arduino-tutorials/dc-motor-with-arduino/
*/

int inPin1 = 4;	//H-Bridge input pins
int inPin2 = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin1, OUTPUT);
  pinMode(inPin2, OUTPUT);
  Serial.println("+ - to set direction, any other key stops motor");  
}
void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    if(ch == '+')
    {
      Serial.println("ClockWise");
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, HIGH);  
    }  
    else if(ch == '-')
    {
      Serial.println("Anti-ClockWise");
      digitalWrite(inPin1, HIGH);
      digitalWrite(inPin2, LOW);  
    }
    else
    {
      Serial.println("Stop motor");
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, LOW);
    }
  }  
}
