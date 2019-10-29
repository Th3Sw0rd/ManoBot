#include <Servo.h>
int i=0;
bool flag = false;
class Dedo{ 
  private:
    int pin;
    String dNombre;
    double dPosition = 0;
    Servo servo;
  public:
    Dedo(int pin, String dNombre){
      this->pin = pin;
      this->dNombre = dNombre;
    }
    void init(){
      this->servo.attach(this->pin);
      this->servo.write(this->dPosition);
    }
    void moveTo(int pos){
      this->dPosition = map(pos, 0, 1023, 0, 180); 
      this->servo.write(this->dPosition);
    }
    int pos;
};

Dedo Pulgar(9, "Pulgar");
Dedo Indice(10, "Indice");
Dedo Medio(11, "Medio");

void setup() {
  Serial.begin(9600);
  Pulgar.init();
  Indice.init();
  Medio.init();
}

void loop() {
  if(i<1020 & flag==false){
    i+=10;
    Indice.pos += 1;
    Medio.pos +=1;
  } else {
    if(i==1020){
      flag = false;
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
