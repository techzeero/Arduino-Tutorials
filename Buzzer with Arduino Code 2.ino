/*
      Buzzer with Arduino Code 2
      For more details, visit: https://techzeero.com/arduino-tutorials/buzzer-with-arduino/
*/

int speakerPin = 9;
char noteNames[] = {'C','D','E','F','G','a','b'};
unsigned int frequencies[] = {262,294,330,349,392,440,494};
byte noteCount = sizeof(noteNames);

char score[] = "CCGGaaGFFEEDDC GGFFEEDGGFFEED CCGGaaGFFEEDDC ";
byte scorelen = sizeof(score);

void setup()
{
}

void loop()
{
  for(int i = 0; i < scorelen; i++)
  {
    int duration = 333;
    playNote(score[i], duration);  
  }  
  delay(4000);
}
void playNote(char note, int duration)
{
  for(int i = 0; i < noteCount; i++)
  {
    if(noteNames[i] == note)
      tone(speakerPin, frequencies[i], duration);  
  }
  delay(duration);  
}
