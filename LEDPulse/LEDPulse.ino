int ledPin = 13; // Alterar este valor para o número do pino que deseja usar

void setup() {
  pinMode(ledPin, OUTPUT); // Configura o pino escolhido como saída
}

void loop() {
  digitalWrite(ledPin, HIGH); // Liga o LED
  delay(1000); // Aguarda 1 segundo
  digitalWrite(ledPin, LOW); // Desliga o LED
  delay(1000); // Aguarda 1 segundo
} 
