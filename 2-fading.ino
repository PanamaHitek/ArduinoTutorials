/*
*
* Autor: Kiara Navarro
* www.panamahitek.com
*
*/

int led = 9; // Salida PWM
int brightness = 0;  
int fadeAmount = 5;  
int ledDelay = 30;  

void setup() { 
  pinMode(led, OUTPUT);
} 

void loop()  { 
  analogWrite(led, brightness);    
  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }       
  delay(ledDelay);                            
}
