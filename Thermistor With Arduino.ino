/* 
   Thermistor with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/thermistor-with-arduino/
*/

int ThermistorPin = 0;
int Vo;
float R1 = 1000;   // Resistor Value (We use 1 KOhms Resistor)
float logR2, R2, T, Tc, Tf;
float A = 1.009249522e-03, B = 2.378405444e-04, C = 2.019202697e-07;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (A + B*logR2 + C*logR2*logR2*logR2));
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0; 

  Serial.print("Temperature: "); 
  Serial.print(Tc);
  Serial.print(" C; ");
  Serial.print(Tf);
  Serial.println(" F");   

  delay(500);
}
