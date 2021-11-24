//Francisco Siles Martins - 2020002294

#include "incremento.h"
#include <iostream>
using namespace std;

int main() {
 InteiroEspecial v1, v2;
 cout << "[Exercicio 01]" << endl;
 cout << "Entre com o valor v1: ";
 cin >> v1;
 cout << "Entre com o valor v2: ";
 cin >> v2;
 cout << "Pos-Incremento de v1 (+2): " << v1++ << endl;
 cout << "Pre-Incremento de v1 (+2): " << ++v1 << endl;
 cout << "Pos-Decremento de v2 (-5): " << v2-- << endl;
 cout << "Pre-Decremento de v2 (-5): " << --v2 << endl;
 cout << "[FIM do Exercicio 01]" << endl;
}
