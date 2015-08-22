/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

// Asignación de pines para los leds indicadores
int ledIzquierdo = 9;
int ledDerecho = 8;

// Inicializamos el valor del sensor
int sensorValor = 0;


#define sensor A0

 
void setup() {
  pinMode(ledIzquierdo, OUTPUT);
  pinMode(ledDerecho, OUTPUT);
}
 
void loop() {
  // Lee el valor recibido del fototransistor
  sensorValor = analogRead(sensor);            

  if ( sensorValor > 400) {
    digitalWrite(ledIzquierdo, HIGH);
    digitalWrite(ledDerecho, LOW);
  }
  // De otro modo 
  else {
    digitalWrite(ledIzquierdo, LOW);
    digitalWrite(ledDerecho, HIGH);
  }
  delay(100);
}                   
