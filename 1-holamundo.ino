/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

// Declaración de variables
int ledPin = 13;
int ledDelay = 1000; 

// Iniciando la configuración en Arduino
void setup() {
	pinMode(ledPin, OUTPUT);
	
}

// Ejecución del primer programa
void loop() {
	digitalWrite(ledPin, HIGH);
	delay(ledDelay);
	digitalWrite(ledPin,LOW);
	delay(ledDelay);
}
