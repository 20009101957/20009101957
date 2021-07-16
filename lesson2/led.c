// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void loop()
{
  for(int i = 2;i<=7;i++)
  {
    if(i>=8) i=2;
    digitalWrite(i, LOW);
 	delay(100); 
    digitalWrite(i, HIGH);
    delay(50); 
  }
  
}
