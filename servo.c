#include <Servo.h>

int pos = 0, registrador = 0, potpin = A0;

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(9);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop() {
  servo.write(pos);
  pos = analogRead(potpin);
  pos = map(pos, 0, 1023, 0, 180);
  delay(15);
  if (digitalRead(5)) {
    registrador = pos;
    Serial.println(registrador);
    while (digitalRead(5)) delay(10);
  }
  else if (digitalRead(6)) {
    servo.write(registrador);
    delay(1000);
    while (digitalRead(6)) delay(10);
    servo.write(pos);
  }
}