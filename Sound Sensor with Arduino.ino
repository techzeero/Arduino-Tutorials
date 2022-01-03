/*
    Sound Sensor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/sound-sensor-with-arduino/
*/


int ledPin = 13;
int sensorPin = A0;
int middleValue = 512;
int numberOfSamples = 128;

int sample;
long signal;
long averageReading;

long runningAverage = 0;
int averagedOver = 16;

int threshold = 400;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  long sumOfSquare = 0;
  for(int i = 0; i < numberOfSamples; i++)
  {
    sample = analogRead(sensorPin);
    signal = (sample - middleValue);
    signal *= signal;
    sumOfSquare += signal;
  }
  averageReading = sumOfSquare / numberOfSamples;
  runningAverage = (((averagedOver - 1)*runningAverage)+averageReading)/averagedOver;

  if(runningAverage > threshold)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  Serial.println(runningAverage);
}
