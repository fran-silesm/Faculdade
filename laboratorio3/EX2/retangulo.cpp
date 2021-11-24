//Francisco Siles Martins - 2020002294

#include "retangulo.h"

using namespace std;

Ret::Ret(){
  larg = alt = 0;
}

Ret::Ret(float ll, float hh){
  larg = ll;
  alt = hh;
}

float Ret::area(){
  return larg * alt;
}

float Ret::perimetro(){
  return 2*larg + 2*alt;
}
