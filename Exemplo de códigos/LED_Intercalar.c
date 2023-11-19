#define time 1000
#define verde 13
#define vermelho 12

void setup()
{
  // intercalar entre verde e vermelho ligado por 1 segundo em binario 00, 01, 10, 11
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, LOW);
  Serial.println("Zero");
  delay(time);
  digitalWrite(verde, LOW);
  digitalWrite(vermelho, HIGH);
  Serial.println("Um");
  delay(time);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
  Serial.println("Dois");
  delay(time);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, HIGH);
  Serial.println("Tres");
  delay(time);
}