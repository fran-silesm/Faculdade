//Francisco Siles Martins - 2020002294

#include "incremento.h"
#include <iostream>
using namespace std;

//Incremento
InteiroEspecial& InteiroEspecial::operator++(){
  e = e + 2;
  return *this;
}

InteiroEspecial InteiroEspecial::operator++(int v){
  InteiroEspecial aux = *this;
  this->e = this -> e + 2;
  return aux;
}

//Decremento
InteiroEspecial& InteiroEspecial::operator--(){
  e = e - 5;
  return *this;
}

InteiroEspecial InteiroEspecial::operator--(int elem){
  InteiroEspecial aux = *this;
  this->e = this -> e - 5;
  return aux;
}

ostream& operator<<(ostream& out, const InteiroEspecial& v){
  out << v.e;
  return out;
}

istream& operator>>(istream& in, InteiroEspecial& v){
  in >> v.e;
  return in;
}
