/*
   4x3 Keypad with Arduino
   For more details, visit: 
*/

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 3; 

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3}; 

Keypad Keys = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup()
{
  Serial.begin(9600);
}
  
void loop()
{
  char customKey = Keys.getKey();
  
  if (customKey)
  {
    Serial.println(customKey);
  }
}
