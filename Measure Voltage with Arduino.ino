/*
   Measure Voltage with Arduino greater than 5V
   For more details, visit: https://techzeero.com/arduino-tutorials/measure-voltage-with-arduino/
   
   By below resistor values you can measure voltage upto 25V
*/


const int vPIN = A0;      //Arduino Analog Pin

float vOUT = 0.0;
float vIN = 0.0;

float R1 = 10000.0;       //Resistor 1 value in ohms (10000 ohms = 10Kohms) 
float R2 = 1000.0;        //Resistor 2 value in ohms (1000 ohms  =  1Kohms)

int value = 0;

void setup()
{
  Serial.begin(9600);
  delay(2000);
}

void loop()
{
  value = analogRead(vPIN);
  vOUT = (value * 5.0) / 1024.0;
  
  vIN = vOUT / ( R2 / (R1 + R2) );
  
  Serial.print("Voltage: ");
  Serial.print(vIN);
  Serial.println("V");
  delay(500);
}
