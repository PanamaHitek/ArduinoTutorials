// Cátodo común

byte sieteSegmentos[10][7] = { 
	  { 1,1,1,1,1,1,0 },  // = 0
	  { 0,1,1,0,0,0,0 },  // = 1
	  { 1,1,0,1,1,0,1 },  // = 2
	  { 1,1,1,1,0,0,1 },  // = 3
	  { 0,1,1,0,0,1,1 },  // = 4
	  { 1,0,1,1,0,1,1 },  // = 5
	  { 1,0,1,1,1,1,1 },  // = 6
	  { 1,1,1,0,0,0,0 },  // = 7
	  { 1,1,1,1,1,1,1 },  // = 8
	  { 1,1,1,0,0,1,1 }   // = 9
	};

	void setup() {                
	  pinMode(2, OUTPUT);   
	  pinMode(3, OUTPUT);
	  pinMode(4, OUTPUT);
	  pinMode(5, OUTPUT);
	  pinMode(6, OUTPUT);
	  pinMode(7, OUTPUT);
	  pinMode(8, OUTPUT);
	  pinMode(9, OUTPUT);
	  // Apagar el punto
	  setDot(0);  
	}

	void loop() {
	  for (byte contador = 10; contador > 0; --contador) {
	   delay(1000);
	   sevenSegWrite(contador - 1); 
	  }
	  delay(4000);
	}
	 
	// Función encargada de recorrer el vector y
	// y encender o apagar secuencialmente cada pin
	void sevenSegWrite(byte numero) {
	  byte pin = 2;
	  for (byte segIndex = 0; segIndex < 7; ++segIndex) {
	    digitalWrite(pin,sieteSegmentos[numero][segIndex]);
	    ++pin;
	  }
	}
