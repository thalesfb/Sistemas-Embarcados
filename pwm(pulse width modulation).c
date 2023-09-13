int pot, pwm;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop()
{
  pot = analogRead(A0);
  pwm = map(pot, 0, 1023, 0, 255);
  analogWrite(11, pwm);
}