/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

int ledPin1 = 11;
int ledPin2 = 10;
int ledPin3 = 9;
int retardo = 1000;

 
void setup() {
	pinMode(ledPin1, OUTPUT);
	pinMode(ledPin2, OUTPUT);
	pinMode(ledPin3, OUTPUT);
}
 
void loop() {

	digitalWrite(ledPin1, LOW);
	digitalWrite(ledPin2, HIGH);
	digitalWrite(ledPin3, LOW);
	delay(retardo);

	digitalWrite(ledPin1, LOW);
	digitalWrite(ledPin2, LOW);
	digitalWrite(ledPin3, HIGH);
	delay(retardo);

	digitalWrite(ledPin1, HIGH);
	digitalWrite(ledPin2, LOW);
	digitalWrite(ledPin3, LOW);
	delay(retardo);

	digitalWrite(ledPin1, HIGH);
	digitalWrite(ledPin2, LOW);
	digitalWrite(ledPin3, HIGH);
	delay(retardo);

	digitalWrite(ledPin1, HIGH);
	digitalWrite(ledPin2, HIGH);
	digitalWrite(ledPin3, LOW);
	delay(retardo);

	digitalWrite(ledPin1, LOW);
	digitalWrite(ledPin2, HIGH);
	digitalWrite(ledPin3, HIGH);
	delay(retardo);

	digitalWrite(ledPin1, HIGH);
	digitalWrite(ledPin2, HIGH);
	digitalWrite(ledPin3, HIGH);
	delay(retardo);

	digitalWrite(ledPin1, LOW);
	digitalWrite(ledPin2, LOW);
	digitalWrite(ledPin3, LOW);
	delay(retardo);
}