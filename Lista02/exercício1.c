int brilho;
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for (brilho = 0; brilho < 255; brilho += 25)
  {
    analogWrite(9, brilho);
    delay(1000);
  }
}