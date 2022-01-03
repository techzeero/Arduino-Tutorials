/*
      Creating an Alarm to Periodically Call a Function
      For more details, visit: https://techzeero.com/arduino-tutorials/arduino-time-without-rtc-module/
*/

#include<Time.h>
#include<TimeAlarms.h>
void setup()
{
  Serial.begin(9600);
  Serial.println("TimeAlarms Example");
  Serial.println("Alarms are triggered daily at 8:00 am and 17:30 pm ");
  Serial.println("One timer is triggered every 15 seconds");
  Serial.println("Another timer is set to trigger only once after 10 seconds");
  Serial.println();

  setTime(8,29,40,1,1,10);

  Alarm.alarmRepeat(8,00,0, MorniingAlarm); //8:30am every day
  Alarm.alarmOnce(17,30,0, EveningAlarm); //5:45pm every day

  Alarm.timerRepeat(15, RepeatTask);
  Alarm.timerOnce(10, OnceOnlyTask);
}
void MorningAlarm()
{
  Serial.println("Alarm: - turn lights off");  
}
void EveningAlarm()
{
  Serial.println("Alarm: - turn lights on");  
}
void RepeatTask()
{
  Serial.println("15 second timer");  
}
void OnceOnlyTask()
{
  Serial.println("This timer only trigger once");  
}
void loop()
{
  digitalClockDisplay();
  Alarm.delay(1000);  
}
void digitalClockDisplay()
{
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.println();  
}
void printDigits(int digits)
{
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);  
}
