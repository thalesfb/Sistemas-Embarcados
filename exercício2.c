int pot1, pot2;
void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}
void loop() {
  pot1 = analogRead(A0);
  pot2 = analogRead(A1);
  if(digitalRead(9)){
    Serial.println(pot1);
    while(digitalRead(9)) delay(10);
  }
  if(digitalRead(10)){
    Serial.println(pot2);
    while(digitalRead(10)) delay(10);
  }
  if(digitalRead(11)){
    Serial.println(pot1 + pot2);
    while(digitalRead(11)) delay(10);
  }
}
