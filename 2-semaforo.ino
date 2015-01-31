void setup() {  
  pinMode(7,OUTPUT);  
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
 
void loop() {
  digitalWrite(7,HIGH);
  delay(2000);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(9,HIGH);
  delay(1000);
}