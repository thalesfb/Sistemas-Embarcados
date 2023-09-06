int brilho, velocidade;
void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  velocidade = map(analogRead(0), 0, 1023, 0, 50);
  if (digitalRead(2)) {
    for (brilho = 0; brilho < 255; brilho += velocidade) {
      analogWrite(9, brilho);
      delay(1000);
    }
  }
  else analogWrite(9, 0);
  if (digitalRead(3)) {
    for (brilho = 255; brilho > 0; brilho -= velocidade) {
      analogWrite(9, brilho);
      delay(1000);
    }
  }
  else analogWrite(9, 0);
}