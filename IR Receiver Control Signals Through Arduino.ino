/* 
   IR Receiver Control Signals Through Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/control-tv-with-an-arduino/
*/

#include<IRremote.h>  //IR remote control library

const int numberOfKeys = 5;
int firstKey = 4; //first pin of the 5 sequential pins connected to buttons
boolean buttonState[numberOfKeys];
boolean lastButtonState[numberOfKeys];
long irKeyCodes[numberOfKeys] = {
  16582903, //0 key
  16615543, //1 key
  16599223, //2 key
  16591063, //3 key
  16623703, //4 key
};

IRsend irsend;

void setup()
{
  for(int i = 0; i < numberOfKeys; i++)
  {
    buttonState[i] = true;
    lastButtonState[i] = true;
    int physicalPin = i + firstKey;
    pinMode(physicalPin, INPUT);
    digitalWrite(physicalPin, HIGH);  
  }  
  Serial.begin(9600);
}

void loop()
{
  for(int keyNumber = 0; keyNumber < numberOfKeys; keyNumber++)
  {
    int physicalPinToRead = keyNumber + 4;
    buttonState[keyNumber] = digitalRead(physicalPinToRead);
    if(buttonState[keyNumber] != lastButtonState[keyNumber])
    {
      if(buttonState[keyNumber] == LOW)
      {
        irsend.sendSony(irKeyCodes[keyNumber], 32);
        Serial.println("Sending");  
      }  
      lastButtonState[keyNumber] = buttonState[keyNumber];
    }  
  }  
}
