//Francisco Siles Martins - 2020002294

#include "primeira.h"
#include <iostream>

using namespace std;

PrimeiraClasse::PrimeiraClasse(){
  num1 = num2 = 0;
}

PrimeiraClasse::PrimeiraClasse(int fst, int snd){
  num1 = fst;
  num2 = snd;
  cout << "\n\nNumeros Inicializados!";
}

PrimeiraClasse::~PrimeiraClasse() {
  cout << "\n\nObjeto Destruido!";
}

//funcoes membro interface

int PrimeiraClasse::soma(){
  return num1 + num2;
}
