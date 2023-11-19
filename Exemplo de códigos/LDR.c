int ldr, pot;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  ldr = analogRead(A0);
  pot = analogRead(A1);
  Serial.print("LDR: ");
  Serial.print(ldr);
  Serial.print(" - ");
  Serial.print("Pot: ");
  Serial.println(pot);
  if (pot > 253) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}
