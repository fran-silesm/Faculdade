//Francisco Siles Martins - 2020002294

#include <iostream>
#include "pessoa.h"

using namespace std;

int main(){
  Pessoa p0;
  Pessoa p1 (33, 1.75, "Manuel");
  Pessoa p2 (18, 1.65, "Maria");

  cout << p0.get_nome() << " tem " << p0.get_idade() << " ano(s) e mede " << p0.get_altura() << "m" << endl;
  cout << p1.get_nome() << " tem " << p1.get_idade() << " ano(s) e mede " << p1.get_altura() << "m" << endl;
  cout << p2.get_nome() << " tem " << p2.get_idade() << " ano(s) e mede " << p2.get_altura() << "m" << endl;

  Pessoa p3;
  int i;
  float alt;
  string n;

  cout << "Digite um nome: ";
  cin >> n;
  p3.set_nome(n);
  cout << "Digite a idade dessa pessoa: ";
  cin >> i;
  p3.set_idade(i);
  cout << "Digite a altura dessa pessoa: ";
  cin >> alt;
  p3.set_altura(alt);
  cout << p3.get_nome() << " tem " << p3.get_idade() << " ano(s) e mede " << p3.get_altura() << "m" << endl;

  return 0;
}
