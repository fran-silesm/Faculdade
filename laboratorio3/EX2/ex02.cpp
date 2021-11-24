//Francisco Siles Martins - 2020002294

#include <iostream>
#include "retangulo.h"

using namespace std;

int main(){
  float l, h;

  cout << "\nInsira a altura: ";
  cin >> h;
  cout << "\nInsira a largura: ";
  cin >> l;

  Ret a(l, h), p(l, h);

  cout << "\n\nArea: " << a.area();
  cout << "\nPerimetro: " << p.perimetro();

  return 0;
}
