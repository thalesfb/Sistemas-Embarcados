int qtd_leds;
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, INPUT);
  pinMode(6, INPUT);
}
void loop() {
  if(digitalRead(3) && qtd_leds !=3){
    qtd_leds++;
    while(digitalRead(3)) delay(10);
  }
  else if(digitalRead(6) && qtd_leds > 0){
    qtd_leds--;
    while(digitalRead(6)) delay(10);
  }
  if(qtd_leds == 0){
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  else if(qtd_leds == 1){
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  else if(qtd_leds == 2){
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  else if(qtd_leds == 3){
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
}
