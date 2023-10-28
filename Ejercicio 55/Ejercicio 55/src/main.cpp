#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
Serial.begin(9600);
Serial.println();

struct coleccion
{
  char titulo[30];
  char artista[25];
  char fechac[20];
  int numcancion;
  float precio;
};


}   
void loop() {
}
