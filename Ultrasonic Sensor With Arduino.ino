/* 
   Ultrasonic Sensor with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/ultrasonic-sensor-with-arduino/
*/

int trigPin = 9; // Trigger Pin of Ultrasonic Sensor
int echoPin = 8; // Echo Pin of Ultrasonic Sensor

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop(){
  long duration, inches, cm;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);

  inches = duration/74 /2;  //convert microseconds into inches
  cm = duration/29 /2;		//convert microseconds into cm
  
  Serial.print(inches);
  Serial.print(" inches ");
  Serial.print(cm);
  Serial.print(" cm");
  Serial.println();
  delay(200);
}
