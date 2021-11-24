//Francisco Siles Martins - 2020002294

#include "vetor.h"
#include <iostream>
using namespace std;

int main() {
  Vector3D vet1, vet2;

  cout << "\nPrograma para calculo de vetores 3D";
  cout << "\n-----------------------------------\n";

  cout << "\nEntre com o vetor 1: ";
  cin >> vet1;

  cout << "\nEntre com o vetor 2: ";
  cin >> vet2;

  cout << "\nSoma (Vetor1 + Vetor2): " << vet1 + vet2;
  cout << "\nSubtracao (Vetor1 - Vetor2): " << vet1 - vet2;

  cout << "\nVetor1 normal: " << vet1;
  cout << "\nVetor1 invertido: " << -vet1;

  cout << "\nVetor2 normal: " << vet2;
  cout << "\nVetor2 invertido: " << -vet2;
  cout << "\nFim do programa!\n";

  return 0;
}
