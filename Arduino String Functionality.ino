/* 
   Arduino String Functionality
   For more details, visit: https://techzeero.com/arduino-tutorials/arduino-string-functionality/
*/

void setup() {
   char my_str[6]; // an array of 5 character string
   Serial.begin(9600);
   my_str[0] = 'H';
   my_str[1] = 'e';
   my_str[2] = 'l';
   my_str[3] = 'l';
   my_str[4] = 'o';
   my_str[5] = 0; // Last array element is a null terminator
   Serial.println(my_str); //Print String in Arduino IDE Serial Monitor
}

void loop() { 

}
