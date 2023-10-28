#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;

void setup() {
Serial.begin(9600);
Serial.println();
}
 char palabra1[] = "Hola";
 char palabra2[] = "hola";

     if (strcmp(palabra1,palabra2)!=0)
         Serial.println(palabra1)("\n Las cadenas son diferentes");
     {
        /* code */
     }
           
void loop() {
}
