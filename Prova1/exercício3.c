int leitura1, leitura2, leitura3, brilho;
void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
}
void loop() {
  if(digitalRead(9)){
    leitura1 = analogRead(A0);
    delay(1000);
    leitura2 = analogRead(A0);
    delay(1000);
    leitura3 = analogRead(A0);
    delay(1000);
    Serial.print("Valor1: ");
    Serial.println(leitura1);
    Serial.print("Valor2: ");
    Serial.println(leitura2);
    Serial.print("Valor3: ");
    Serial.println(leitura3);
    Serial.print("Média: ");
    Serial.println((leitura1 + leitura2 + leitura3)/3);
    brilho = map((leitura1 + leitura2 + leitura3)/3, 0, 1023, 0, 255);
    //Serial.println(brilho);
    analogWrite(10, brilho);
  }
}
