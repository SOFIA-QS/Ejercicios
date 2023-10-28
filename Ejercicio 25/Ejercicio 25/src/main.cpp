#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

 void setup() { 
  Serial.begin(9600);
  Serial.println();

  int n,suma=0;

  Serial.println("Digite el número de elmentos a sumar: ");
  for (size_t i = 1; i <=n; i++)
      suma+=i;
  {
  }
  
  Serial.print("\n La suma es: "+ String(suma));
}

void loop() {
  // put your main code here, to run repeatedly:
}