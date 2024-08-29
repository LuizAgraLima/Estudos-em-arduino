// Definição do pino do sensor de temperatura
int sensorPin = A0;  // Pino analógico onde o sensor está conectado

void setup() {
  // Inicializa a comunicação serial a 9600 bps
  Serial.begin(9600);
}

void loop() {
  // Lê o valor do sensor de temperatura
  int sensorValue = analogRead(sensorPin);
  
  // Converte o valor lido para tensão (0 a 5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Converte a tensão para temperatura em Celsius
  float temperatureC = (voltage - 0.5) * 100;
  
  // Exibe a temperatura no Serial Monitor
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.print(" ");        // Espaço antes do símbolo de grau
  Serial.print((char)176);  // Símbolo de grau (°)
  Serial.println("C");
  
  // Atraso de 10 segundos antes de fazer a próxima leitura
  delay(10000);
}