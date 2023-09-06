// Faça um código que ligue a quantidade de leds em ordem conforme a quantidade de botões sejam pressionados. Três botões e três leds. 
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  if (digitalRead(2))
  {
    digitalWrite(5, HIGH);
  }
  else if (digitalRead(2) == LOW)
  {
    digitalWrite(5, LOW);
  }
  if (digitalRead(3))
  {
    digitalWrite(6, HIGH);
  }
  else if (digitalRead(3) == LOW)
  {
    digitalWrite(6, LOW);
  }
  if (digitalRead(4))
  {
    digitalWrite(7, HIGH);
  }
  else if (digitalRead(4) == LOW)
  {
    digitalWrite(7, LOW);
  }
}