//Francisco Siles Martins - 2020002294

#include "complexo.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  Complexo c1, c2;

  cout << "\nPrograma com complexos\n";
  cout << "------------------------\n";

  cout << "\nInsira o Primeiro Complexo: ";
  cin >> c1;
  cout << "\nInsira o Segundo Complexo: ";
  cin >> c2;

  cout << "\nModulos e angulos:";
  cout << "\nPrimeiro Complexo - Modulo " << c1.modulo() << " e Angulo " << c1.angulo();
  cout << "\nSegundo Complexo - Modulo " << c2.modulo() << " e Angulo " << c2.angulo();


  if(c1 == c2){
    cout << "\nO Primeiro complexo nao e maior que o segundo.";
    cout << "\nO Primeiro e o Segundo complexo sao iguais.";
  }else{
    if(c2 > c1){
      cout << "\nO Primeiro complexo nao e maior que o segundo.";
    }else{
      cout << "\nO Primeiro complexo e maior que o segundo.";
    }
    cout << "\nO Primeiro e o Segundo complexo sao diferentes.";
  }

  cout << "\n\nFim do programa!";

  return 0;
}
