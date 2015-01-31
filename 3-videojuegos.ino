void setup() {  
  pinMode(7,OUTPUT);  
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
 int leerPushButton1 = digitalRead(6);
 int leerPushButton2 = digitalRead(5);
 Serial.println(leerPushButton1);
 Serial.println(leerPushButton2);
 delay(1000);
 if (leerPushButton1 == 1) {
 	digitalWrite(8,HIGH);
 }
 else {
 	digitalWrite(8, LOW);
 }
 if (leerPushButton2 == 1) {
 	digitalWrite(7,HIGH);
 }
 else {
 	digitalWrite(7, LOW);
 }
}