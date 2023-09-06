int brilho, velocidade;
void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  velocidade = map(analogRead(0), 0, 1023, 0, 50);
  //velocidade = analogRead(0)/1023;
  //Serial.println(velocidade);
  if (digitalRead(2)) {
    for (brilho = 0; brilho < 255; brilho += velocidade) {
      //Serial.println(brilho);
      analogWrite(9, brilho);
      delay(1000);
    }
  }
  else analogWrite(9, 0);
}