/*
      Buzzer with Arduino Code 1
      For more details, visit: https://techzeero.com/arduino-tutorials/buzzer-with-arduino/
*/

int speakerPin = 9; //speaker to pin 9
int pitchPin = 0; //input that determines frequency of tone
int durationPin = 1;  //input that will determine the duration of the tone

void setup()
{  
}
void loop()
{
  int sensorReading0 = analogRead(pitchPin);
  int sensorReading1 = analogRead(durationPin);

  //map the analog reading to a meaningful range
  int frequency = map(sensorReading0, 0, 1023, 100, 5000);
  int duration = map(sensorReading1, 0, 1023, 100, 1000);
  tone(speakerPin, frequency, duration);
  delay(duration);
}
