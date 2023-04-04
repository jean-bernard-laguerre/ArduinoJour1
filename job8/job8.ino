// C++ code
//
int i = 0;

void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}