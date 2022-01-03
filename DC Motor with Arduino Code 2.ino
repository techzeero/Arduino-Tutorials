/*
    DC Motor with Arduino Code 2
    For more details, visit: https://techzeero.com/arduino-tutorials/dc-motor-with-arduino/
*/

int inPin1 = 2; //H-Bridge input pins
int inPin2 = 3;
int inPin3 = 4; //H-Bridge pins for second motor
int inPin4 = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin1, OUTPUT);
  pinMode(inPin2, OUTPUT);
  pinMode(inPin3, OUTPUT);
  pinMode(inPin4, OUTPUT);
  Serial.println("+ - sets direction of motors, any other key stops motors");  
}

void loop()
{
  if(Serial.available())
  {
    char ch = Serial.read();
    if(ch == '+')
    {
      Serial.println("ClockWise");
      //first motor
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, HIGH); 
      //second motor
      digitalWrite(inPin3, LOW);
      digitalWrite(inPin4, HIGH);
    }
    else if (ch == '-')
    {
      Serial.println("Anti-ClockWise");
      digitalWrite(inPin1, HIGH);
      digitalWrite(inPin2, LOW);
      digitalWrite(inPin3, HIGH);
      digitalWrite(inPin4, LOW);      
    }  
    else
    {
      Serial.println("Stop motors");
      digitalWrite(inPin1, LOW);
      digitalWrite(inPin2, LOW);
      digitalWrite(inPin3, LOW);
      digitalWrite(inPin4, LOW);  
    }
  }
}
