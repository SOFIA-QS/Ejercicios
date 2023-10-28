#include <Arduino.h>
#include <DataCapture.h>
#include <string.h>

using namespace DataCapture;

void setup() {
Serial.begin(115200);
Serial.println();
  
  char frase [30];
  int va,ve,vi,vo,vu=0;
  int i;

   String entrada= captureString ("Ingrese una frase: ");

  for (i = 0; i <=30; i++){
     switch (frase[1])
     {
     case 'a': va++;break;
     case 'e': ve++;break;
     case 'i': vi++;break;
     case 'o': vo++;break;
     case 'u': vu++;break;
   
     }
  }
   Serial.print("vocal a: "+ String(va));
   Serial.print("vocal e: "+ String(ve));
   Serial.print("vocal i: "+ String(vi));
   Serial.print("vocal o: "+ String(vo));
   Serial.print("vocal u: "+ String(vu));
}
void loop() {

}