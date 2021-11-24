//Francisco Siles Martins - 2020002294

#include "estudante.cpp"
#include "estudante.h"

int main(){
  int n1, n2;
  string aluno = "";

  cout << "\nInsira o nome do Estudante: ";
  cin >> aluno;
  cout << "\nInsira a Nota 1 do Estudante: ";
  cin >> n1;
  cout << "\nInsira a Nota 2 do Estudante: ";
  cin >> n2;

  Estudante Estudante(n1,n2,aluno);
  Estudante.calcula_media();
  Estudante.imprime();

  return 0;
}
