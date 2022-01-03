/*
      Arduino Time without RTC Module
      For more details, visit: https://techzeero.com/arduino-tutorials/arduino-time-without-rtc-module/
*/

#include <Time.h>
#include <TimeLib.h>

void setup()
{
  Serial.begin(9600);
  setTime(12,0,0,1,1,20);  
}

void loop()
{
  digitalClockDisplay();
  delay(1000);  
}
void digitalClockDisplay()
{
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print(" ");
  Serial.print(month());
  Serial.print(" ");
  Serial.print(year());
  Serial.println();  
}
void printDigits(int digits)
{
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);  
}
