/*
   Flame Sensor With Arduino For Fire Detection
   For more details, visit: https://techzeero.com/arduino-tutorials/flame-sensor-with-arduino-for-fire-detection/
*/

int Buzzer = 13; // Use buzzer for alert 
int FlamePin = 9;  // This is for input pin
int Flame;

void setup() {
  pinMode(Buzzer, OUTPUT);
  pinMode(FlamePin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  Flame = digitalRead(FlamePin);
  if (Flame == HIGH)
  {
    digitalWrite(Buzzer, HIGH);
    Serial.println("Alarm Activated");
  }
  else
  {
    digitalWrite(Buzzer, LOW);
    Serial.println("Alarm Deactivated");
  }
}
