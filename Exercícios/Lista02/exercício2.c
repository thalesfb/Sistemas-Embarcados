int brilho;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  if(digitalRead(2)){
    for (brilho = 0; brilho < 255; brilho += 25)
    {
      analogWrite(9, brilho);
      delay(1000);
    }
  }
  else{
    analogWrite(9, 0);
  }
}