/*
   Turning the Cursor and Display On or Off
   For more details, visit: https://techzeero.com/arduino-tutorials/how-to-use-an-lcd-display-with-arduino/ 
*/

#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  //set up the number of columns and rows of LCD:
  lcd.begin(16,2);
  lcd.print("hello, world!");  //print a message to the LCD
}
void loop()
{
  lcd.setCursor(0,1);
  lcd.print("cursor blink");
  lcd.blink();
  delay(2000);
	
  lcd.clear();
  
  lcd.noBlink();
  lcd.print("no Blink");
  delay(2000);

  lcd.clear();

  lcd.print("Display off...");
  delay(1000);
  lcd.noDisplay();
  delay(2000);

  lcd.display();  //turn the display back on

  lcd.setCursor(0,0);
  lcd.print("display flash !");
  displayBlink(2,250);
  displayBlink(2,250);

  lcd.clear();    
}

void displayBlink(int blinks, int duration)
{
  while(blinks--)
  {
    lcd.noDisplay();
    delay(duration);
    lcd.display();
    delay(duration);  
  }  
}
