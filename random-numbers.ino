int randNumber;
void setup()
{
  Serial.begin(9600);
  Serial.println("print 20 random numbers between 0 and 9");
  for(int i=0; i < 20; i++)  
  {
     randNumber = random(10);
     Serial.print(randNumber);
     Serial.print(" ");
  }
  Serial.println();
  Serial.println("Print 20 random number between 2 and 9");
  for(int i=0; i < 20; i++)
  {
    randNumber = random(2, 10);
    Serial.print(randNumber);
    Serial.print(" ");
  }
  //Print random number with the same seed value each time
  randomSeed(1234);
  Serial.println();
  Serial.println("Print 20 random numbers betweeen 0  to 9 after constant seed ");
  for(int i=0; i < 20; i++)
  {
    randNumber = random(10);
    Serial.print(randNumber);
    Serial.print(" ");  
  }
  //Print random numbers with the different seed value each time
  randomSeed(analogRead(0));
  Serial.println();
  Serial.println("Print 20 random numbers between 0 and 9 after floating seed ");
  for(int i=0; i < 20; i++)
  {
    randNumber = random(10);
    Serial.print(randNumber);
    Serial.print(" ");  
  }
  Serial.println();
  Serial.println();
}
void loop()
{
}
