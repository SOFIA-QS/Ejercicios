#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
  Serial.begin(9600);
  Serial.println();

  int n1,n2;

  Serial.println("Digite un número: ");
  while (!Serial.available()){}
  n1=Serial.parseInt();
  Serial.println("El primer número es: " + String(n1));
  Serial.println("Digite otro número: ");
  
 while (!Serial.available()){}
  n2=Serial.parseInt();
  Serial.println("El Segundo número es: " + String(n2));
 if (n1>n2)
 {
  Serial.println("El número mayor es: " + String(n1));
 }
  else 
  {
 Serial.println("El número mayor es: " + String(n2));
 }

}

void loop() {
  // put your main code here, to run repeatedly:
}

