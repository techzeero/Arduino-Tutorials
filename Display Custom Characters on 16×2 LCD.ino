/*
      Display Custom Characters on 16×2 LCD
      For more details, visit: https://techzeero.com/arduino-tutorials/custom-characters-on-16x2-lcd/
*/

#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

byte smile[8] = {0b00000,0b01010,0b00000,0b00000,0b10001,0b01110,0b00000,0b00000};

byte human[8] = {0b01110,0b01110,0b00100,0b01110,0b10101,0b00100,0b01010,0b01010};

byte heart[8] = {0b00000,0b01010,0b11111,0b11111,0b11111,0b01110,0b00100,0b00000};

byte sad[8] = {0b00000,0b10001,0b00000,0b00000,0b01110,0b10001,0b00000,0b00000};

byte lock[8] = {0b00000,0b01110,0b10001,0b10001,0b11111,0b11011,0b11011,0b11111};

void setup()
{
  lcd.createChar(0, smile);
  lcd.createChar(1, human);
  lcd.createChar(2, heart);
  lcd.createChar(3, sad);
  lcd.createChar(4, lock);
  lcd.begin(16, 2);  
}
void loop()
{
  int i = 0, j = 1;		//initialize variable
  
  lcd.setCursor(0,0);	// print using variable
  lcd.write(i);
  
  lcd.setCursor(1,0);
  lcd.write(j);
  
  lcd.setCursor(2,0);	//print using uint8 method
  lcd.write((uint8_t)2);
  
  lcd.setCursor(3,0);
  lcd.write((uint8_t)3);
  
  lcd.setCursor(4,0);
  lcd.write((uint8_t)4);
}
