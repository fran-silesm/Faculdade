//Francisco Siles Martins - 2020002294

#include <iostream>

using namespace std;

inline int cube(int pot);

int main (){
  int a;
  int *b = nullptr;
  b = &a;

  cout << "Entre com um inteiro: ";
  cin >> a;

  cout << "\nValor apontado pelo ponteiro: " << *b;
  cout << "\nEndereco de memoria apontado: " << b;
  cout << "\nEndereco de memoria do ponteiro: " << &b;

  cout << "\nO cubo de " << a << " e: " << cube(a);

  return 0;
}

inline int cube (int pot){
  return pot*pot*pot;
}
