/*
   Determining How Long a Switch (Pushbutton) is Pressed
   For more details, visit: https://techzeero.com/arduino-tutorials/how-to-use-a-push-button-switch-with-arduino/
*/

int ledPin =  13;  // output pin
int inPin = 2;  //input pin
int debounceTime = 20;    //time in milliseconds required for the switch to be stable
int fastIncrement = 1000;   //increment faster after this many milliseconds
int veryFastIncrement = 4000; //increment even faster after this many milliseconds
int count = 0;        //count decrements every tenth of a second until reaches 0

void setup()
{
  pinMode(inPin, INPUT);
  digitalWrite(inPin, HIGH);  //turn on pull-up resister
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int duration = switchTime();
  if( duration > veryFastIncrement)
    count = count + 10;
  else if ( duration > fastIncrement)
    count = count + 4;
  else if ( duration > debounceTime)
    count = count + 1;
  else
  {
    //switch not pressed so service the timer
    if( count == 0)
      digitalWrite(ledPin, HIGH); //turn the LED on if the count is 0
    else
    {
      digitalWrite(ledPin, LOW);  //turn LED off if the count in not 0
      count = count - 1;    //and decrement the count
    }
  }
  Serial.println(count);
  delay(100);
} 
//return time in milliseconds that the switch has been in pressed LOW
long switchTime()
{
  static unsigned long startTime = 0;
  static boolean state;
  if(digitalRead(inPin) != state)
  {
    state = ! state;
    startTime = millis();
  } 
  if(state == LOW)
    return millis() - startTime;
  else
    return 0;
}
