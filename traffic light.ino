int ledpin1=7;
int ledpin2=8;
int ledpin3=4;
void setup()
{
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
}

void loop()
{
  digitalWrite(ledpin1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin1, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin2, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(ledpin3, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
}