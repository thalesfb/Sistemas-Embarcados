// Faça um sistema que quando o botão 2 for pressionado o led 13 deve ligar, quando o botão 3 for pressionado o led 12 deve ligar. Os leds desligarão quando ambos estiveram ligados por 5s. 
int bt1, bt2;
void setup()
{
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
    bt1 = 1;
  }
  if (digitalRead(3))
  {
    digitalWrite(6, HIGH);
    bt2 = 1;
  }
  if (bt1 == 1 && bt2 == 1) {
    delay(5000);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    bt1 = 0;
    bt2 = 0;
  }
}