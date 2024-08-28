int Poten = A1;
int LEDPin = 13;
int valor = 0;

void setup() {
  
  pinMode(LEDPin, OUTPUT);
}

void loop()  {
  
  valor = analogRead(Poten);
  digitalWrite(LEDPin, HIGH);
  delay(valor);
  digitalWrite(LEDPin, LOW);
  delay(valor);
}
  