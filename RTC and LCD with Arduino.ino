/*
      DS3231 RTC and LCD with Arduino
      For more details, visit: https://techzeero.com/arduino-tutorials/ds3231-rtc-with-arduino-arduino-real-time-clock/
*/

#include <DS3231.h>
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 

DS3231  rtc(SDA, SCL);

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

void setup()
{ 
 rtc.begin();     // Initialize the rtc object
 lcd.begin(16,2);
}

void loop()
{ 
 lcd.setCursor(0,0);
 lcd.print("Time:  ");
 lcd.print(rtc.getTimeStr());
 
 lcd.setCursor(0,1);
 lcd.print("Date: ");
 lcd.print(rtc.getDateStr());
 
 delay(1000); 
}
