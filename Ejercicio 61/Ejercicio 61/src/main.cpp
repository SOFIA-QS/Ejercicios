#include <Arduino.h>
#include <DataCapture.h>
#include <string>

using namespace DataCapture;

struct promedio {
  float nota1;
  float nota2;
  float nota3;
};

struct alumno {
String nombre;
String genero;
int edad;
struct promedio prom;

};

void setup() {
Serial.begin(9600);
Serial.println();

struct alumno alumno1;

alumno1.nombre = captureString("Ingrese nombre del alumno: ")
alumno1.genero = captureString("Ingres el genero del alumno:")
alumno1.edad = captureInteger("Ingre la edad del alumno:")
alumno1.promedio.nota1 =captureFloat("Ingrese nota 1: ")
alumno1.promedio.nota2 =captureFloat("Ingrese nota 2: ")
alumno1.promedio.nota3 =captureFloat("Ingrese nota 3: ")

Serial.println("Alumno 1");
Serial.println("Nombre: " + alumno1.nombre);
Serial.println("Genero: "+ alumno1.genero);
Serial.println("Edad: " + String(alumno1.edad));

float n1 = alumno1.promedio.nota1;
float n2 = alumno1.promedio.nota2;
float n3 = alumno1.promedio.nota3;
float promedio = (n1+n2+n3)/3;

Serial.println("promedio: " + String(promedio)); 

}

void loop() {
} 