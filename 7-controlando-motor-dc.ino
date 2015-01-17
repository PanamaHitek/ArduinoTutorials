// Pinaje del L293D
// Pin 1: Habilita motor 1 
// Pin 9: Habilita motor 2
// Pin 2: Dirección motor 1
// Pin 15: Dirección motor 2

const int habiPriMotor = 5;
const int habiSegMotor = 6;        
const int dirPriMotor = 7;
const int dirSegMotor = 8;


byte velocidadDerecha = 100; 
byte velocidadIzquierda = 100; 


void setup() {

  // Asigna los pines para el Puente H
  pinMode(habiPriMotor, OUTPUT);
  pinMode(habiSegMotor, OUTPUT);
  pinMode(dirPriMotor,  OUTPUT);
  pinMode(ditSegMotor,  OUTPUT);

  // Inicializa los motores en estado parado
  analogWrite(habiPriMotor, 0);
  analogWrite(habiSegMotor, 0);
}

void loop() {

}

void adelante() {
  digitalWrite(dirPriMotor, HIGH);
  digitalWrite(ditSegMotor, HIGH);  
  analogWrite(habiPriMotor, speedLeft);
  analogWrite(habiSegMotor, speedRight);
}
 
void parar() {
  digitalWrite(dirPriMotor, LOW);  
  digitalWrite(ditSegMotor, LOW);  
  analogWrite(habiPriMotor, 0);
  analogWrite(habiSegMotor, 0);
}
 
void atras() {
  digitalWrite(dirPriMotor, LOW); 
  digitalWrite(ditSegMotor, LOW);  
  analogWrite(habiPriMotor, speedLeft);
  analogWrite(habiSegMotor, speedRight);
}
 
void izquierda() {
  digitalWrite(dirPriMotor, LOW);
  digitalWrite(ditSegMotor, HIGH);  
  analogWrite(habiPriMotor, speedLeft);
  analogWrite(habiSegMotor, speedRight);
}
 
void derecha() {
  digitalWrite(dirPriMotor, HIGH);
  digitalWrite(ditSegMotor, LOW);  
  analogWrite(habiPriMotor, speedLeft);
  analogWrite(habiSegMotor, speedRight);
}