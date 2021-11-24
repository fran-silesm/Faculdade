//Francisco Siles Martins - 2020002294

#include "complexo.h"
#include <iostream>
#include <math.h>
using namespace std;

Complexo::Complexo(double rr, double ii){
  re = rr; im = ii;
}

//funcoes membro
float Complexo::angulo(){
  return atan(im/re);
}

float Complexo::modulo(){
  return sqrt(re*re + im*im);
}

bool Complexo::operator>(Complexo& num){
  if(modulo() > num.modulo()){
    return true;
  }
  return false;
}

bool Complexo::operator==(Complexo& num){
  if((num.modulo() == modulo()) && (num.angulo() == angulo())){
      return true;
  }
  return false;
}

ostream& operator<<(ostream& out, const Complexo& num){
  out << num.re << " " << num.im;
  return out;
}
istream& operator>>(istream& in, Complexo& num){
  in >> num.re >> num.im;
  return in;
}
