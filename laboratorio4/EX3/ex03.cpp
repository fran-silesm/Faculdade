//Francisco Siles Martins - 2020002294

#include <iostream>
#include "modelacarro.h"

using namespace std;

int main(){
  ModelaCarro c0;
  ModelaCarro c1 (200, 20);
  ModelaCarro c2 (400, 30);
  cout << fixed;
  cout.precision(2);

  cout << "Carro 1 abastecido com " << c1.get_gas() << " litros. \n";
  cout << "Carro 2 abastecido com " << c2.get_gas() << " litros. \n";
  cout << "Carro 1 percorreu " << c1.get_dist() << " km. \n";
  cout << "Carro 2 percorreu " << c2.get_dist() << " km. \n";
  cout << "Carro 1 ainda tem " << c1.sobragas() << " litros de gasolina e pode percorrer mais " << c1.distpercorrida() << "km. \n";
  cout << "Carro 2 ainda tem " << c2.sobragas() << " litros de gasolina e pode percorrer mais " << c2.distpercorrida() << "km. \n";

  float l, s;
  cout << "Gostaria de abastecer o carro com quantos litros de gasolina? \n";
  cout << "Digite aqui: ";
  cin >> l;
  c0.abasteceCarro(l);

  cout << "\nQual a distancia que voce quer percorrer? \n";
  cout << "Digite aqui: ";
  cin >> s;
  c0.deslocaCarro(s);
  cout << "\nCarro 0 abastecido com " << c0.get_gas() << " litros. \n";
  cout << "Carro 0 percorreu " << c0.get_dist() << " km. \n";
  cout << "Carro 0 ainda tem " << c0.sobragas() << " litros de gasolina e pode percorrer mais " << c0.distpercorrida() << "km. \n";

  return 0;
}
