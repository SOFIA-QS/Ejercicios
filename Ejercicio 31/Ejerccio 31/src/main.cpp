#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;
void setup() {
  Serial.begin(9600);
  Serial.println();
 
 int numero[]={1,2,3,4,5};
 int suma=0; 

  for (size_t i = 0; i <=5; i++)
  suma=+numero[1];
  {
    /* code */
  }
   Serial.print("\n El resultado de la suma es: "+ String(suma));
}
void loop() {
  // put your main code here, to run repeatedly:
}

