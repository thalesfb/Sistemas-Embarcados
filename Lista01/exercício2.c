//Faça um sistema que conte o total de vezes que os pinos D2 ao D05 foram pressionados. Esse valor deve ser mostrado na serial. 
int contbt1 = 0, contbt2 = 0, contbt3 = 0;
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
    while (digitalRead(2)) delay(10);
    contbt1 += 1;
    Serial.print("Botao 1 presionado ");
    Serial.print(contbt1);
    Serial.println(" vezes");
    Serial.print("Botao 2 presionado ");
    Serial.print(contbt2);
    Serial.println(" vezes");
    Serial.print("Botao 3 presionado ");
    Serial.print(contbt3);
    Serial.println(" vezes");
  }
  else if (digitalRead(2) == LOW)
  {
    digitalWrite(5, LOW);
  }
  if (digitalRead(3))
  {
    digitalWrite(6, HIGH);
    while (digitalRead(3)) delay(10);
    contbt2 += 1;
    Serial.print("Botao 1 presionado ");
    Serial.print(contbt1);
    Serial.println(" vezes");
    Serial.print("Botao 2 presionado ");
    Serial.print(contbt2);
    Serial.println(" vezes");
    Serial.print("Botao 3 presionado ");
    Serial.print(contbt3);
    Serial.println(" vezes");
  }
  else if (digitalRead(3) == LOW)
  {
    digitalWrite(6, LOW);
  }
  if (digitalRead(4))
  {
    digitalWrite(7, HIGH);
    while (digitalRead(4)) delay(10);
    contbt3 += 1;
    Serial.print("Botao 1 presionado ");
    Serial.print(contbt1);
    Serial.println(" vezes");
    Serial.print("Botao 2 presionado ");
    Serial.print(contbt2);
    Serial.println(" vezes");
    Serial.print("Botao 3 presionado ");
    Serial.print(contbt3);
    Serial.println(" vezes");
  }
  else if (digitalRead(4) == LOW)
  {
    digitalWrite(7, LOW);
  }
}