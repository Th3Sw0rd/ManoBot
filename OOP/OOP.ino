#include <Servo.h>
int i=0;
bool flag = false;
class Dedo{ 
  private:
    int pin;
    double dPosition = 0;
    String dNombre;
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
};

Dedo Pulgar(9, "Pulgar");
Dedo Indice(10, "Indice");
Dedo Medio(11, "Medio");

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Pulgar.init();
  Indice.init();
  Medio.init();
}

void loop() {
  if(i<1020 & flag==false){
    i+=5;
  } else {
    if(i==1020){
      flag = false;
      i=1020;
    }
    if(flag){
      i-=5;
      if(i==0){
        flag = false;
      }
    }
  }
  Medio.moveTo(i);
        delay(15);
}
