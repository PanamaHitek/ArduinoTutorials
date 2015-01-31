// Pinaje Arduino - L293D
// Pin 3 - Pin 1 (Habilita Motor 1)
// Pin 2 - Pin 2 (Entrada 1 de Motor 1)
// Pin 7 - Pin 7 (Entrada 2 de Motor 1)

int pinVelocidad = 3; 
int enPriMotor1 = 2;  
int enPriMotor2 = 7; 

byte velocidad = 3;

void setup() {
  pinMode(pinVelocidad, OUTPUT);  
  pinMode(enPriMotor1, OUTPUT);  
  pinMode(enPriMotor2, OUTPUT);  
}  
   
void loop() {  
  analogWrite(pinVelocidad, velocidad);   

  digitalWrite(enPriMotor1, LOW);  
  digitalWrite(enPriMotor2, HIGH);  
  delay(2000);  

  parar();  

  digitalWrite(enPriMotor1, HIGH);  
  digitalWrite(enPriMotor2, LOW);  
  delay(2000);  
  para_motor();  
}  
    
void parar() {  
  digitalWrite(enPriMotor1, LOW);  
  digitalWrite(enPriMotor2, LOW);  
  delay(2000);  
}  