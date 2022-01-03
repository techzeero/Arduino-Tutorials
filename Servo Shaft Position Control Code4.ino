/* 
   Servo Motor Control with an Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/servo-motor-with-an-arduino/
*/

#include <Servo.h>

#define servoPin 9  //Attach the signal pin of the servo to D9 of Arduino
#define potPin A0   //Attach the potentiometer pin to A0 of Arduino

Servo myservo;  //Object Initialized

int angle = 0;

void setup() {
  myservo.attach(servoPin);
}

void loop() {
  angle = analogRead(potPin);
  angle = map(angle, 0, 1023, 0, 179);
  myservo.write(angle);
  delay(5);
}
