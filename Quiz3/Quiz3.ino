#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int analog = A0;
  
void setup()
{
  pinMode(analog, INPUT);
  lcd.begin(16, 2);
  lcd.print("Temperature: ");
}

void loop()
{
  int analog_value = analogRead(analog);
  float celsius = ((analog_value*5.0/1023)/0.01-50);
  lcd.setCursor(0, 1);
  lcd.print(celsius);
}