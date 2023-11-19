int brilho = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(2)) {
    brilho = brilho + 25;
    if (brilho > 255) brilho = 255;
    while (digitalRead(2)) delay(10);
  }
  if (digitalRead(3)) {
    brilho = brilho - 25;
    if (brilho < 0) brilho = 0;
    while (digitalRead(3)) delay(10);
  }
  analogWrite(11, brilho);
  Serial.println(brilho);
}