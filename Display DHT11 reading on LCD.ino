/* 
   DHT11 Temperature and Humidity Sensor With Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/dht11-with-arduino/
*/

//LiquidCrystal Library for LCD :- https://github.com/arduino-libraries/LiquidCrystal

#include <dht.h>
#include <LiquidCrystal.h>

#define dht_pin A0     // Analog Pin A0 of Arduino is connected to DHT11 out pin
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

dht DHT;
 
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
}
 
void loop()
{
    DHT.read11(dht_pin);
    
    Serial.print("Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%    ");
    Serial.print("Temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println(" C");
    lcd.setCursor(0, 0);
    lcd.print("Humidity=");
    lcd.print(DHT.humidity);
    lcd.print("%");
    lcd.setCursor(0, 1);
    lcd.print("Temp = ");
    lcd.print(DHT.temperature);
    lcd.print(" C");    
    delay(5000); //Reduce Time for Quick Reply 
}
