//Francisco Siles Martins - 2020002294

#include <stdexcept>
#include <iostream>
using namespace std;

class DivisaoPorZero : public runtime_error {
  public:
    DivisaoPorZero() : runtime_error("Divisao por zero!\n") { }
};

int quo(int n, int d){
  if (d == 0)
    throw DivisaoPorZero();

  return n / d;
}

int main() {
  int a = 0, b = 0, c = 0, d = 0;

  cout << "\nDividindo inteiros:";
  cout << "\n\n---------------------------------------\n";
  cout << "\nForneca o dividendo: ";
  cin >> a;
  cout << "\nForneca o divisor: ";
  cin >> b;

  try{
    cout << "\nResultado: "<< quo(a,b) << "\n";
  }catch (runtime_error &ex1) {
    cout << "\nErro detectado: \n" << ex1.what();
  }

  cout << "\nDividindo inteiros:";
  cout << "\n\n---------------------------------------\n";
  cout << "\nForneca o dividendo: ";
  cin >> c;
  cout << "\nForneca o divisor: ";
  cin >> d;

  try{
    cout << "\nResultado: "<< quo(c,d) << "\n";
  }catch (runtime_error &ex2) {
    cout << "\nErro detectado: \n" << ex2.what();
  }

  return 0;
}
