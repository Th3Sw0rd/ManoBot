/*
  ManoBot.h - Librería para controlador de servo motores de Mano Ortopédica.
  Creado por Tobias I. Juhasz, 4 de Noviembre del 2019.
*/

#ifndef ManoBot_h
#define ManoBoto_h

#include "Arduino.h"
#include "Servo.h"

class Dedo{ 
  private:
    int pin;
    String dNombre;
    double dPosition = 0;
    Servo servo;
  public:
    Dedo();
    Dedo(int pin, String dNombre);
    void init();
    void moveTo(int pos);
    int pos;
    ~Dedo();
};

#endif