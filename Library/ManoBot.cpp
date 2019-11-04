/*
  ManoBot.cpp - Librería para controlador de servo motores de Mano Ortopédica.
  Creado por Tobias I. Juhasz, 4 de Noviembre del 2019.
*/

#include "Arduino.h"
#include "Servo.h"
#include "ManoBot.h"

Dedo::Dedo() : pin(0), dNombre(""), dPosition(0) {}
Dedo::Dedo(int pin, String dNombre) : pin(pin), dNombre(dNombre) {}
void Dedo::init(){
    this->servo.attach(this->pin);
    this->servo.write(this->dPosition);
}
void Dedo::moveTo(int pos){
    this->dPosition = map(pos, 0, 1023, 0, 180); 
    this->servo.write(this->dPosition);
}
Dedo::~Dedo() {}