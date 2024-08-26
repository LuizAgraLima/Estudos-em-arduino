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
      colorState = 0;
    }

    // Atualiza a cor do LED RGB com base no valor de colorState
    switch (colorState) {
      case 0: // LED desligado
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
        break;
      case 1: // Vermelho
        analogWrite(redPin, 255);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 0);
        break;
      case 2: // Verde
        analogWrite(redPin, 0);
        analogWrite(greenPin, 255);
        analogWrite(bluePin, 0);
        break;
      case 3: // Azul
        analogWrite(redPin, 0);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 255);
        break;
    }
    
    // Aguarda um momento para evitar múltiplas alternâncias rápidas
    delay(200);
  }
  
  // Armazena o estado atual do botão como o último estado
  lastButtonState = buttonState;

}