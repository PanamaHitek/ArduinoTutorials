/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/


// Iniciando la configuración en Arduino
void setup() {
	pinMode(13, OUTPUT);
	
}

// Ejecución del primer programa
void loop() {
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13,LOW);
	delay(1000);
}
