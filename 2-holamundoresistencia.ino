// Iniciando la configuración en Arduino
void setup() {
	pinMode(9, OUTPUT);
	
}

// Ejecución del primer programa
void loop() {
	digitalWrite(9, HIGH);
	delay(1000);
	digitalWrite(9,LOW);
	delay(1000);
}
