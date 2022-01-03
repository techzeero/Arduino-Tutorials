/* 
   7 Segment Display with Arduino
   For more details, visit: https://techzeero.com/arduino-tutorials/7-segment-display-with-arduino/
   By This Code we display digits(numbers) from 0 to 9 on 7-Segment Display 
*/


// An array of 7 Segment Display pins configuration

int seg_array[10][7] = {  { 1,1,1,1,1,1,0 },    // 0
                          { 0,1,1,0,0,0,0 },    // 1
                          { 1,1,0,1,1,0,1 },    // 2
                          { 1,1,1,1,0,0,1 },    // 3
                          { 0,1,1,0,0,1,1 },    // 4
                          { 1,0,1,1,0,1,1 },    // 5
                          { 1,0,1,1,1,1,1 },    // 6
                          { 1,1,1,0,0,0,0 },    // 7
                          { 1,1,1,1,1,1,1 },    // 8
                          { 1,1,1,0,0,1,1 }};   // 9
                                       
void Digit_disp(int); //Function for Countdown

void setup() 
{ 
  // Define Pins
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
 
}

void loop() 
{ 
  // Loop for Counter
  for (int counter = 0; counter <= 9; counter++) 
  {
   delay(1000);
   Digit_disp(counter); 
  }
  delay(1000);
}

// this functions writes values to the sev seg pins  
void Digit_disp(int number) 
{
  int pin = 2;
  for (int j=0; j < 7; j++) 
  {
   digitalWrite(pin, seg_array[number][j]);
   pin++;
  }
}
