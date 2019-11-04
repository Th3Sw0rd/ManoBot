/*
 * Código de ejemplo del funcionamiento de ManoBot.h
 * Librería creada por Tobias I. Juhasz. 
 * 
 * El funcionamiento de la librería queda implicito en el código y solo posee las siguientes funciones:
 * Dedo dedo(pin, nombre);
 * dedo.init();
 * dedo.moveTo(int); // int (0-1024)
 * 
 * Este ejemplo solo permite abrir y cerrar la mano ortopédica para corroborar el correcto funcionamiento de sus motores.
 */

// Se incluyen las librerías necesarias.
#include <Servo.h>
#include <ManoBot.h>


// Se hacen las declaraciones de las variables del proyecto
int i=0; // Contador
bool flag = false; // Flag para el control de los motores. Que si abre o que si cierra.
Dedo Pulgar(9, "Pulgar");
Dedo Indice(10, "Indice");
Dedo Medio(11, "Medio");

int A = A0;

void setup() {
  Serial.begin(9600);
  // Se inicializan los Dedos. (Setea el servomotor a usar).
  Pulgar.init();
  Indice.init();
  Medio.init();
}

void loop() {
  Serial.println(analogRead(A)/1023*18);
  if(i<1020 & flag==false){
    i+=10;
    Indice.pos += 1;
    Medio.pos +=1;
  } else {
    if(i==1020){
      flag = true;
      Indice.pos = 1020;
      Medio.pos = 1020;
      i=1020;
    }
    if(flag){
      i-=10;
      Indice.pos -= 1;
      Medio.pos -= 1;
      if(i==0){
        flag = false;
      }
    }
  }
  Indice.moveTo(Indice.pos);
  Pulgar.moveTo(i);
  Medio.moveTo(Medio.pos);
  delay(15);  
}
