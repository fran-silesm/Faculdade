//Francisco Siles Martins - 2020002294

#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

void set_valor(int v){
  if (v > 9 || v < 0)
    throw std::out_of_range("Erro: Numero fora dos limites.");

  cout << "Este e um numero simples, no intervalo ideal.\n";
}

int main() {
  int num;

  try {
    cout << "\nInsira um numero entre 0 e 9: ";
    cin >> num;
    set_valor(num);
  }catch (out_of_range &ex){
    cout << ex.what() << "\n";
  }

  return 0;
}
