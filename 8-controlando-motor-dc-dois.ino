// Utilizando dos motores
// Pinaje Arduino - L293D
// Pin 3 - Pin 1 (Habilita Motor 1)
// Pin 2 - Pin 2 (Entrada 1 de Motor 1)
// Pin 7 - Pin 7 (Entrada 2 de Motor 1)
// Pin 15 - Pin 6 (Entrada 1 de Motor 2)
// Pin 10 - Pin 5 (Entrada 2 de Motor 2)

int pinVelocidad = 5; 
int enPriMotor1 = 4;
int enPriMotor2 = 2;

int pinVelocidad2 = 6;
int enSegMotor1 = 7; 
int enSegMotor2 = 8;


byte velocidad = 255;

void setup() {
  pinMode(pinVelocidad, OUTPUT);  
  pinMode(pinVelocidad2, OUTPUT);  
  pinMode(enPriMotor1, OUTPUT);  
  pinMode(enPriMotor2, OUTPUT);  
  pinMode(enSegMotor1, OUTPUT); 
  pinMode(enSegMotor2, OUTPUT); 
}  
   
void loop() {  
  analogWrite(pinVelocidad, velocidad);   
  analogWrite(pinVelocidad2, velocidad);  

  digitalWrite(enPriMotor1, LOW);  
  digitalWrite(enPriMotor2, HIGH);
  digitalWrite(enSegMotor1, LOW);  
  digitalWrite(enSegMotor2, HIGH);   
  delay(2000);  

  parar();  

  digitalWrite(enPriMotor1, HIGH);  
  digitalWrite(enPriMotor2, LOW);
  digitalWrite(enSegMotor1, HIGH);  
  digitalWrite(enSegMotor2, LOW); 
  delay(2000);  
  parar();  
}  
    
void parar() {  
  digitalWrite(enPriMotor1, LOW);  
  digitalWrite(enPriMotor2, LOW);
  digitalWrite(enSegMotor1, LOW);  
  digitalWrite(enSegMotor2, LOW);   
  delay(2000);  
}  