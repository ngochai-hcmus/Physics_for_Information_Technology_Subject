int ledOrange = 8;
int ledWhite = 4;
int ledBlue = 10;
void setup()
{
  pinMode(ledOrange, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop()
{
  digitalWrite(ledOrange, HIGH);
  delay(8000);
  digitalWrite(ledOrange, LOW);
  
  digitalWrite(ledWhite, HIGH);
  delay(4000);
  digitalWrite(ledWhite, LOW);
  
  digitalWrite(ledBlue, HIGH);
  delay(10000);
  digitalWrite(ledBlue, LOW);
}