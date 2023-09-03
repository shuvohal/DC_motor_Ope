// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  digitalWrite(4, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(4, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
}