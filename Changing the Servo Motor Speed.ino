/* 
   Servo Motor Control with an Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/servo-motor-with-an-arduino/
*/

#include "Servo.h"
 
Servo myservo;        //Object Initialized
                
int angle = 0;    
 
void setup() 
{ 
  myservo.attach(9);      //Attach the signal pin of servo to D9 of arduino
} 
  
void loop() 
{ 
  for(angle = 0; angle < 180; angle = angle + 1) //Command to move from 0 degrees to 180 degrees 
  {                                  
    myservo.write(angle);     //Command to rotate the servo to the specified angle
    delay(10);     //Change the delay for changing the Speed of Servo Motor          
  } 
  delay(100);   //Delay for pause
  
  for(angle = 180; angle >= 0; angle = angle-1) // command to move from 180 degrees to 0 degrees 
  {                                
    myservo.write(angle);
    delay(10);    //Change the delay for changing the Speed of Servo Motor                    
  } 
  delay(100);   //Delay for pause
}
