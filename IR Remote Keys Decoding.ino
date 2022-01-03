/* 
   IR Receiver and Remote with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/ir-receiver-and-remote-with-arduino/
*/

#include <IRremote.h>

int IRpin = 8;
IRrecv irrecv(IRpin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() 
{
  if (irrecv.decode(&results)) 
    {
      Serial.println(results.value, DEC); // Print the Serial 'results.value'
      irrecv.resume();   // Receive the next value
    }
}
