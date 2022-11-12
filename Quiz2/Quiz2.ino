int light_pin = A0;
int led = 8;

void setup()
{
  pinMode(light_pin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(light_pin);
  Serial.println(value);
  while (value < 500) {
    Serial.println(value);
    digitalWrite(led, HIGH);
    value = analogRead(light_pin); 
  }
  digitalWrite(led, LOW);
}