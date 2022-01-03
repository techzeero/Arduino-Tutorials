/* 
   Relay with Arduino and LDR
   For more details, visit: 
*/

int sensorPin = A0;
int relayPin = 9;

void setup() 
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
}
void loop() 
{
  int sensorValue = analogRead(sensorPin);
  if( sensorValue <= 500 )  // Change the value as per your requirement
  {
    digitalWrite(relayPin, LOW);
    Serial.print("LED ON ");
    Serial.println(sensorValue);
    delay(100);
  }

  else
  {
    digitalWrite(relayPin, HIGH);
    Serial.print("LED OFF");
    Serial.println(sensorValue);
  }
}
