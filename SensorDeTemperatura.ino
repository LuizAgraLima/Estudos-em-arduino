// Definição dos pinos
int buttonPin = 2;    // Pino do botão
int redPin = 13;      // Pino para a cor vermelha do LED RGB
int greenPin = 11;    // Pino para a cor verde do LED RGB
int bluePin = 12;     // Pino para a cor azul do LED RGB

// Variável para armazenar o estado do botão
int buttonState = 0;

// Variável para alternar entre cores
int colorState = 0;

// Variável para armazenar o estado anterior do botão
int lastButtonState = LOW;

void setup() {
  // Configura os pinos do LED RGB como saída
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // Configura o pino do botão como entrada com pull-up interno
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Lê o estado do botão
  buttonState = digitalRead(buttonPin);
  
  // Verifica se o botão foi pressionado (mudança de HIGH para LOW)
  if (buttonState == LOW && lastButtonState == HIGH) {
    // Alterna entre cores quando o botão é pressionado
    colorState++;
    if (colorState > 3) {
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
  Serial.println(" °C");
  
  // Atraso de 10 segundo antes de fazer a próxima leitura
  delay(10000);
}