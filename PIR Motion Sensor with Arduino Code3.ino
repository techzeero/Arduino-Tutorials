/*  
    PIR motion sensor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/pir-motion-sensor-with-arduino/
*/

int ledPin = 13;             // Attach LED Pin
int sensorPin = 5;           // Attach sensor out pin to Arduino D5

void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(sensorPin, INPUT);
 digitalWrite(ledPin, LOW);
 Serial.begin(9600);
}

void loop(){
 if (digitalRead(sensorPin) == HIGH) {
   digitalWrite(ledPin, HIGH);  // turn LED ON
   delay(1000);                 // Delay Time - change according your need
 } 
 else if(digitalRead(sensorPin) == LOW) {
   digitalWrite(ledPin, LOW);   // turn LED OFF if no motion
   Serial.println(state);
 }
}
