/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

int ledIzquierdo = 13;      // Pin para el led indicador 
int ledDerecho = 12; 
int sensorValor = 0;        // Inicializamos el valor del sensor


#define sensor = A0;

 
void setup() {
  Serial.begin(9600); 
  pinMode(ledIzquierdo, OUTPUT);
  pinMode(ledDerecho, OUTPUT);
}
 
void loop() {
  // Lee el valor recibido del fototransistor o fotoled
  sensorValor = analogRead(sensor);            

  // Si el valor es por encima de 900 
  if ( sensorValor > 900 ) {
    digitalWrite(ledIzquierdo, HIGH);
    digitalWrite(ledDerecho, LOW);
  }
  // De otro modo 
  else {
    digitalWrite(ledIzquierdo, LOW);
    digitalWrite(ledDerecho, HIGH);
  }

  // Visualiza el valor del sensor en consola serial
  Serial.print("El valor del sensor es = " );                       
  Serial.println(sensorValor);     

  // Se introduce un tiempo de retardo para poder leer bien los valores 
  delay(100);
}                   
