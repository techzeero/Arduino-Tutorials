/*  
    PIR motion sensor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/pir-motion-sensor-with-arduino/
*/

int ledPin = 13;              // LED Pin
int sensorPin = 5;            // PIR Outpin 
int state = 0;                // PIR status
void setup() {
 pinMode(ledPin, OUTPUT);     
 pinMode(sensorPin, INPUT);     
 Serial.begin(9600);
}
void loop(){
 state = digitalRead(sensorPin); 
 if (state == HIGH) {
   digitalWrite(ledPin, HIGH);  // turn LED ON
   Serial.println(state);
 } 
 else {
   digitalWrite(ledPin, LOW);   // turn LED OFF if no motion
   Serial.println(state);
 }
}
