/* 
  Flame Sensor With Arduino For Fire Detection 
  For more details, visit: https://techzeero.com/arduino-tutorials/flame-sensor-with-arduino-for-fire-detection/ 
*/

const int analogPin = A0;    // Flame Sensor (A0) to Arduino analog input pin A0
const int BuzzerPin = 13;    // Buzzer output pin
const int threshold = 400;   // Flame level threshold value

void setup() 
{
  pinMode(BuzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int analogValue = analogRead(analogPin);
  Serial.println(analogValue);
  
  if (analogValue > threshold) 
  {
    digitalWrite(BuzzerPin, HIGH);
    Serial.print("Alarm Activated");
  } 
  else
  {
    digitalWrite(BuzzerPin, LOW);
    Serial.print("Alarm Deactivated");
  }
  delay(500);       
}
