/*
    DC Motor with Arduino Code 3
    For more details, visit: https://techzeero.com/arduino-tutorials/dc-motor-with-arduino/
*/

int enPin = 6;  //H-Bridge enable pin
int inPin1 = 4; //H-Bridge input pins
int inPin2 = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin1, OUTPUT);
  pinMode(inPin2, OUTPUT);  
  Serial.println("Speed (0-9) or + - to set direction");
}

void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    if(ch >= '0' && ch <='9')
    {
      int speed = map(ch, '0','9',0,255);
      analogWrite(enPin, speed);
      Serial.println(speed);
    }  
    else if(ch == '+')
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
      Serial.print("Unexpected character ");
      Serial.println(ch);  
    }
  } 
}
