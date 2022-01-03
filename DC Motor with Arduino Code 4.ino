/*
    DC Motor with Arduino Code 4
    For more details, visit: https://techzeero.com/arduino-tutorials/dc-motor-with-arduino/
*/

int leftPins[] = {5,7,4}; //one pin for PWm, two pins for motor direction
int rightPins[] = {6,3,2};  

int leftSensorPin = 0;  //analog pin for sensors
int rightSensorPin = 1;

int sensorThreshold = 0;  //must have this much light on a sensor to move
int looks = 0;  //the number of attempts to turn and find light

void setup()
{
  for(int i=1; i < 3; i++)
  {
    pinMode(leftPins[i], OUTPUT);
    pinMode(rightPins[i], OUTPUT);  
  }  
}

void loop()
{
    int leftVal = analogRead(leftSensorPin);
    int rightVal = analogRead(rightSensorPin);
    if(sensorThreshold == 0)
      sensorThreshold = (leftVal + rightVal) / 2;

    if(leftVal < sensorThreshold && rightVal < sensorThreshold)
    {
      if(looks < 4) //limit the number of consecutive looks
      {
        lookAround();
        looks = looks + 1;  
      }  
    }
    else
    {
      //if there is adequate ligth to move ahead
      setSpeed(rightPins, map(rightVal,0,1023,0,255));
      setSpeed(leftPins, map(leftVal,0,1023,0,255));
      looks = 0;  
    }
}
void lookAround()
{
  //rotate left or half a second
  setSpeed(leftPins, -127);
  setSpeed(rightPins, 127);
  delay(500);
  setSpeed(rightPins, 0);
  setSpeed(leftPins, 127);  
}

void setSpeed(int pins[], int speed)
{
  if(speed < 0)
  {
    digitalWrite(pins[1], HIGH);
    digitalWrite(pins[2], LOW);
    speed = -speed;  
  }  
  else
  {
    digitalWrite(pins[1], LOW);
    digitalWrite(pins[2], HIGH);  
  }
  analogWrite(pins[0], speed);
}
