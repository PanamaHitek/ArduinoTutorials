/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

// Se crean arreglos para las entradas y salidas digitales
int switchPines[] = {2,3,4,5};
int ledPines[] = {10,11,12,13};
int switchValor;

void setup() {

	for ( int indice = 0; indice <= 3; indice++ ) { 
		pinMode(ledPines[indice], OUTPUT);
		pinMode(switchPines[indice], INPUT);

		// Iniciamos resistencias pull-up
		digitalWrite(switchPines[index],HIGH);
	}
}

void loop() {

	for ( int indice = 0; indice <= 3; indice++ ) {
		// Lee el valor actual que tenga las entradas analógicas 
		switchValor = switchPines[indice];

		// Se el switch está abierto
		if ( switchValor == LOW ) {
			// Enciende el led
			digitalWrite(ledPines[indice], HIGH);
		}
		// Si el switch está cerrado
		else {
			// Apaga el led
			digitalWrite(ledPines[indice], LOW);
		}

	}

}


