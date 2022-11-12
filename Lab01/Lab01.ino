int leds[] = {13, 12, 11, 10, 9, 8};

int button = 4;

int lastState = LOW;
unsigned long lastMillis = 0;

void setup()
{
  for (int i = 0; i < 6; i++) {
  	pinMode(leds[i], OUTPUT);
  }
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int buttonState = digitalRead(button);
  if (buttonState != lastState) {
    lastMillis = millis();
    lastState = buttonState;
  }
  
  if (buttonState == HIGH) {
    if ((unsigned long)(millis() - lastMillis) > 12000) {
      while (digitalRead(button) == HIGH) {
        for (int i = 0; i < 6; i++) {
          if (digitalRead(button) == HIGH) {
            digitalWrite(leds[i], HIGH);
          }
        }
      }
      lastMillis = millis();
    }
  }
  
  if (buttonState == HIGH) {
    for (int i = 0; i < 6; i++) {
      if (digitalRead(button) == HIGH) {
        digitalWrite(leds[i], HIGH);
        delay(1000);
        digitalWrite(leds[i], LOW);
      }
  }
  }
  
  for (int i = 0; i < 6; i++) {
  	digitalWrite(leds[i], LOW);
  }

}