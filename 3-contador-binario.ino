/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

int contadorDecimal = 0;
int dividendo; 

void setup() {

	for ( int ledPin = 2; ledPin <= 9; ledPin++ ) { 
		pinMode(ledPin, OUTPUT);
	}
}

void loop() {

	// Incrementa el contador 
	contadorDecimal++;

	// Si el contador ha llegado a 256...
	if ( contadorDecimal > 255 ) { 
		contadorDecimal = 0;
	}

	// Asigna el contador decimal como dividendo
	dividendo = contadorDecimal; 

	for ( int ledPin = 2; ledPin <= 9; ledPin++ ) {
		// Coloca el módulo correspondiente a cada posición del led
		digitalWrite(ledPin, dividendo%2); 
		// Asigna el nuevo dividendo
		dividendo = dividendo/2; 
	}

}


