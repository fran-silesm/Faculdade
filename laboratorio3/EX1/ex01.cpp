//Francisco Siles Martins - 2020002294

#include <iostream>
#include "primeira.h"

using namespace std;

int main(){
  int n1, n2;

  cout << "\nInsira o primeiro numero: ";
  cin >> n1;
  cout << "\nInsira o segundo numero: ";
  cin >> n2;

  PrimeiraClasse sum(n1,n2);

  cout << "\n\nO teste de adicao e: " << sum.soma();


  return 0;
}
