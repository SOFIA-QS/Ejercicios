#include <Arduino.h>
#include <DataCapture.h>

using namespace DataCapture;
void setup() {
  Serial.begin(9600);
  Serial.println();

  int numero [2][2]= {{1,2},{3,4}};
  int matriz [2][2]; 
  int i,j=0; 
   
   /// Pasando los numeros a matriz///
   for (i = 0; i <=2; i++){
    for (j = 0; j<=2; j++){
          matriz[i][j]=numero[i][j];
  
       }
   }
       for (j = 0; j<=2; j++){
          matriz[i][j]=numero[i][j];
       }

   // Mostrando matriz////
   for (i = 0; i <=2; i++){
       for (j = 0; j <=2; j++){
       Serial.print(matriz[i][j]);
   }
}
}
void loop() {
}