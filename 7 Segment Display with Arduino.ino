/* 
   7 Segment Display with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/7-segment-display-with-arduino/
   By this Code we only turn ON and OFF the 7 Segment LED's 
*/ 


void setup()
{
 // define pin modes 
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 
}

void loop() 
{
  // loop for turn ON 7-segment leds 
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
  }
  
  // loop for turn OFF 7-segment leds 
  for(int i=2; i<9; i++)
  {
    digitalWrite(i,LOW);
    delay(500);
  }
  
  delay(1000);
}
