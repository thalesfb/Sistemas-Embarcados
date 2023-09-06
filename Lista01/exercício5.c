// Faça um sistema que compare o sinal analógico de duas entradas. Quando a diferença entre eles for menor que 50 um led deve ligar, caso contrario esse led deve desligar.
int diferenca;
void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  diferenca = abs(analogRead(0) - analogRead(1));
  //Serial.print(analogRead(0));
  //Serial.print(" - ");
  //Serial.println(analogRead(1));
  Serial.println(diferenca);
  if (diferenca < 50) {
    digitalWrite(9, HIGH);
  }
  else
    digitalWrite(9, LOW);
}