int redPin = 13;
int greenPin = 12;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Luz verde acesa (Permissão para seguir)
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(10000);  // 10 segundos
  digitalWrite(greenPin, LOW);

  // Luz amarela acesa (Atenção)
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);  // Verde + Vermelho = Amarelo
  delay(2000);  // 2 segundos
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);

  // Luz vermelha acesa (Pare)
  digitalWrite(redPin, HIGH);
  delay(10000);  // 10 segundos
  digitalWrite(redPin, LOW);
}