/*
   Scrolling Text on LCD 16x2
   For more details, visit: https://techzeero.com/arduino-tutorials/how-to-use-an-lcd-display-with-arduino/ 
*/

#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int numRows = 2;
int numCols = 16;

void setup()
{
  lcd.begin(numCols, numRows);  
}
void loop()
{
  marquee("A message is too long to fit !");
  delay(1000);
  lcd.clear();  
}
void marquee(char *text)
{
  int length = strlen(text);
  if(length < numCols)
    lcd.print(text);
  else
  {
    int pos;
    for(pos = 0; pos < numCols; pos++)
      lcd.print(text[pos]);
    delay(1000);
    while(pos < length)
    {
      lcd.scrollDisplayLeft();
      lcd.print(text[pos]);
      pos = pos + 1;
      delay(300);  
    }  
  }
}
