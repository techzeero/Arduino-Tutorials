/* 
   IR Receiver and Remote with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/ir-receiver-and-remote-with-arduino/
*/

#include <IRremote.h>

int IRpin = 8;  // pin for the IR sensor
int LED = 13;   // LED pin  

IRrecv irrecv(IRpin);
decode_results results;

boolean lightState = false;
void setup(){
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
   irrecv.enableIRIn();    // Start the receiver
}
 
void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume(); 
     
    if(results.value == 3268051071) // Remote Key Code From which we want turn led on
    {
      lightState = !lightState; //toggle the LED
      digitalWrite(Relay1, lightState);
    }
  }
}
