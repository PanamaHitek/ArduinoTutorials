/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

int ledPin = 9;
int potenciometroValor = 0;

#define potenciometro A0

void setup() { 
	// Inicia conexión serial
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
} 

void loop()  {
	// Lee valor analógico del potenciómetro 
	potenciometroValor = analogRead(potenciometro);

	// Escala este valor un factor 4
	potenciometroValor = potenciometroValor/4;

	// Presenta el valor en consola serial
	Serial.println(potenciometroValor);
	delay(1000);

	// Genera valor proporcional al led
	analogWrite(ledPin, potenciometroValor);  
}
