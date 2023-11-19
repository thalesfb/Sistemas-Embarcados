// Faça um código que um led inicie desligado e aumente seu brilho progressivamente até atingir o brilho máximo, em 10s, devendo apagar e iniciar novamente.
int brilho;
void setup()
{
  pinMode(5, OUTPUT);
}

void loop()
{
  for (brilho = 0; brilho < 255; brilho += 25)
  {
    analogWrite(5, brilho);
    delay(1000);
  }
}