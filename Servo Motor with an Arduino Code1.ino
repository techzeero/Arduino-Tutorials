/*
   Servo Motor Control with an Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/servo-motor-with-an-arduino/
*/

#include "Servo.h"

#define servoPin  9  //Pin Defined

const int StartPosition = 0;    //Starting position
const int EndPosition = 180;  //Position when event is detected

Servo myservo;  //Object Initialized

void setup() 
{
    Serial.begin(9600);
    Serial.println("start");   
    myservo.attach(servoPin);
    myservo.write(StartPosition);
    delay(100);  
}

void loop() 
{ 
    myservo.write(StartPosition); 
    delay(500);                           
    myservo.write(EndPosition);   
    delay(500);                           
}
