#include <NECIRrcv.h>
#define pin_receptor 2    // Este es el pin donde irá conectado nuestro fotoreceptor de infrarrojos

NECIRrcv ir(pin_receptor) ; // con esto, la libreria sabrá cómo se llama el pin que usamos para enviarle la información
unsigned long ircode ; // usaremos una variable tipo long sin signo (como no usaremos numeros negativos, podremos tener más memoria)
  
  
void setup()
{
  Serial.begin(9600) ;
  Serial.println("Lector de codigos IR!");
  ir.begin() ;
}

void loop()
{  // lo que hace el siguiente bucle es, cuando el emisor envie el código, nuestro arduino lo almacenará y seguidamente nos lo imprimirá
  while (ir.available()) {  
    ircode = ir.read() ;
    Serial.print("Tu codigo NEC es: 0x") ;
    Serial.println(ircode,HEX) ; // con el HEX, hacemos que el código se pase a hexadecimal. Existen más tipos, DEC (decimal),  BIN (binario), OCT (octal),etc
  }