/*
   Tilt Sensor with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/tilt-sensor-with-arduino/
*/

int tiltSensorPin = 2;
int ledPin = 12;
int tiltSensorPreviousValue = 0;
int tiltSensorCurrentValue = 0;
long lastTimeMoved = 0;
int shakeTime = 50;

void setup()
{
		pinMode(tiltSensorPin, INPUT);
		digitalWrite(tiltSensorPin, HIGH);
		pinMode(ledPin, OUTPUT);
}
void loop()
{
		tiltSensorCurrentValue = digitalRead(tiltSensorPin);
		if(tiltSensorPreviousValue != tiltSensorCurrentValue)
		{
			lastTimeMoved = millis();
			tiltSensorPreviousValue = tiltSensorCurrentValue;
		}
		if(millis() - lastTimeMoved < shakeTime)
		{
			digitalWrite(ledPin, HIGH);
		}
		else
		{
			digitalWrite(ledPin, LOW);
		}
}
