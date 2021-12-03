//Francisco Siles Martins - 2020002294

#include <iostream>
using namespace std;

#ifndef CALCULADORA_H
#define CALCULADORA_H

template <class C>
class Calculadora {
  private:
    C a, b;

  public:
    Calculadora (C aa = 0, C bb = 0) : a{aa}, b{bb} { }
    ~Calculadora () { }

    void print();
    C Adicao() {return a + b; }
    C Divisao() {return a / b; }
    C Multiplicacao() {return a * b; }
    C Subtracao() {return a - b; }
};

#endif

template <class C>
void Calculadora<C>::print(){
  cout << "\nAdicao: " << Adicao();
  cout << "\nSubtraca: " << Subtracao();
  cout << "\nMultiplicacao: " << Multiplicacao();
  cout << "\nDivisao: " << Divisao();
}

int main() {
  int x = 0, y = 0;
  float c = 0.0, d = 0.0;

  cout << "\nCalculadora de inteiros:\n";
  cout << "-------------------------------------------------------------\n";
  cout << "Entre com os operandos: ";
  cin >> x >> y;
  Calculadora<int> r1(x, y);
  cout << "\n-------------------------------------------------------------\n";
  cout << "[Resultados]\n";
  r1.print();

  cout << "\nCalculadora de floats:\n";
  cout << "-------------------------------------------------------------\n";
  cout << "Entre com os operandos: ";
  cin >> c >> d;
  Calculadora<float> r2(c,d);
  cout << "\n-------------------------------------------------------------\n";
  cout << "[Resultados]\n";
  r2.print();

  return 0;
}
