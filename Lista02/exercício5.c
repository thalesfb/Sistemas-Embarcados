int brilho;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  brilho = map(analogRead(0), 0, 1023, 0, 510);
  if (brilho < 256) {
    analogWrite(9, brilho);
    analogWrite(10, 0);
  }
  else {
    analogWrite(9, 255);
    analogWrite(10, brilho - 255);
  }
}