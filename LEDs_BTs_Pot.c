int pot;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  pot = analogRead(0);
  if (digitalRead(2) and pot > 253)
  {
    digitalWrite(13, HIGH);
    while (digitalRead(2) == HIGH) delay(10);
  }
  if (digitaRead(3) and pot > 253)
  {
    digitalWrite(11, HIGH);
    while (digitalRead(3) == HIGH) delay(10);
  }
  if (digitalRead(2)) {
    Serial.println(pot);
    while (digitalRead(2) == HIGH) delay(10);
  }
  if (digitalRead(3)) {
    Serial.println(pot);
    while (digitalRead(3) == HIGH) delay(10);
  }
  if (digitalRead(2) == LOW) {
    digitalWrite(13, LOW);
  }
  if (digitalRead(3) == LOW) {
    digitalWrite(11, LOW);
  }
}
