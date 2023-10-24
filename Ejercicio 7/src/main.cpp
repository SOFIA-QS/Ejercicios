#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
  Serial.begin(9600);
  Serial.println();

  float a,b,c,d,e,f, resultado=0;

  a = captureFloat("Ingrese el valor de a: ");
  b = captureFloat("Ingrese el valor de b: ");
  c = captureFloat("Ingrese el valor de c: ");
  d = captureFloat("Ingrese el valor de d: ");
  e = captureFloat("Ingrese el valor de e: ");
  f = captureFloat("Ingrese el valor de f: ");

  resultado= (a+(b/c))/(d+(e/f));

  Serial.println("El resultado es: " + String(resultado));
}

void loop() {
  // put your main code here, to run repeatedly:
}

