static const int POT_PIN = 3;
static const int LED_PIN = 4;

void setup()
{
  analogWrite(LED_PIN, 255); // off
}

void loop()
{
  // read the pot value and reduce 10-bit value to 8-bit
  int potValue = analogRead(POT_PIN) >> 2;
  // map to reduced range
  int pwmValue = map(potValue, 0, 255, 0, 60);
  analogWrite(LED_PIN, pwmValue);
}
