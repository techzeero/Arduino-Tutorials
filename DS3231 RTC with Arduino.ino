/*
      DS3231 RTC with Arduino
      For more details, visit: https://techzeero.com/arduino-tutorials/ds3231-rtc-with-arduino-arduino-real-time-clock/
*/

#include <DS3231.h>

DS3231 rtc(SDA, SCL);

void setup()
{
  Serial.begin(9600);
  
  rtc.begin();  // Initialize the RTC object
  
  // The following lines can be uncommented to set the date and time manually
  //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week
  //rtc.setTime(12, 0, 0);     // Set the time (24hr format)
  //rtc.setDate(1, 1, 2020);   // Set the date
}

void loop()
{
  Serial.print(rtc.getDOWStr());  // Send Day
  Serial.print(" ");
  
  Serial.print(rtc.getDateStr()); // Send Date
  Serial.print(" -- ");
  
  Serial.println(rtc.getTimeStr()); // Send time
  
  delay (1000);
}
