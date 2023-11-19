void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if(digitalRead(2))
  {
    digitalWrite(10, HIGH);
    Serial.println("Amarelo");
    while(digitalRead(2)) delay(10);
  }
  if (digitalRead(3))
  {
    digitalWrite(11, HIGH);
    Serial.println("Verde");
    while (digitalRead(3)) delay(10);
  }
}