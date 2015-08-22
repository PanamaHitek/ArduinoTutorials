void setup() {  
  pinMode(7,OUTPUT);  
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
 int leerPushButton1 = digitalRead(5);
 int leerPushButton2 = digitalRead(4);
 if (leerPushButton1 == 1) {
 	digitalWrite(7,HIGH);
 }
 else {
 	digitalWrite(7, LOW);
 }
 if (leerPushButton2 == 1) {
 	digitalWrite(6,HIGH);
 }
 else {
 	digitalWrite(6, LOW);
 }
}