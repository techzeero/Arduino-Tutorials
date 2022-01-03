/* 
   DHT11 Temperature and Humidity Sensor With Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/dht11-with-arduino/
*/

#include <dht.h>

#define dht_pin A0     // Analog Pin A0 of Arduino is connected to DHT11 out pin
 
dht DHT;
 
void setup()
{
  Serial.begin(9600);
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
    
    delay(5000); //Reduce Time for Quick Reply 
}
