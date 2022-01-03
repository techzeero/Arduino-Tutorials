/*  
    PIR motion sensor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/pir-motion-sensor-with-arduino/
*/

int ledPin = 13;             // Attach LED Pin
int sensorPin = 5;           // Attach sensor out pin to Arduino D5
int state = LOW;             // Motion State
int val = 0;                 // sensorPin value

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  val = digitalRead(sensorPin);
  if (val == HIGH) {
    digitalWrite(ledPin, HIGH); 
    delay(100); 
    
    if (state == LOW) {
      Serial.println("Motion Detected"); 
      state = HIGH;
    }
  } 
  else {
      digitalWrite(ledPin, LOW);
      delay(200);
      
      if (state == HIGH){
        Serial.println("Motion Stopped");
        state = LOW;
    }
  }
}
