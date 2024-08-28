int redPin = 13; //Pino para a cor vermelha do veículo 
int greenPin = 12; //Pino para a cor verde do veículo
int redPedPin = 11; //Pino para a cor vermelha do pedestre
int greenPedPin = 10; //Pino para a cor verde do pedestre
int i;

void setup () {
  
	//Configura os pinos do LED como saída  
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(redPedPin, OUTPUT);
	pinMode(greenPedPin, OUTPUT);
}

void loop () {

	//Luz verde do veículo e Vermelha do pedestre acesas  
	digitalWrite(greenPin, HIGH);
	digitalWrite(redPin, LOW);
	digitalWrite(greenPedPin, LOW);  
	digitalWrite(redPedPin, HIGH);
	delay (10000); //Espera 10 segundos
	digitalWrite(greenPin, LOW); 
  
	//Luz amarela do veículo e vermelha do pedestre acesas  
	digitalWrite(greenPin, HIGH);
	digitalWrite(redPin, HIGH);
	digitalWrite(greenPedPin, LOW);  
	digitalWrite(redPedPin, HIGH);
	delay (2000); //Espera 2 segundos
	digitalWrite(greenPin, LOW);	
	digitalWrite(redPedPin, LOW); 

	//Luz vermelha do veículo e verde do pedestre acesas  
	digitalWrite(greenPin, LOW);
	digitalWrite(redPin, HIGH);    
	digitalWrite(greenPedPin, HIGH);  
	digitalWrite(redPedPin, LOW);
	delay (10000); //Espera 10 segundos
	digitalWrite(greenPin, LOW);	  
  
	for (int i = 0; i < 3; i++) {  // Piscar 2 vezes
			digitalWrite(greenPedPin, HIGH);
		    delay(200);  // 0.2 segundos
  	        digitalWrite(greenPedPin, LOW);
  	        delay(200);  // 0.2 segundos
	}  
}