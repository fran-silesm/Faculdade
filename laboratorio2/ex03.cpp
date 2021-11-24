//Francisco Siles Martins - 2020002294

#include <iostream>

using namespace std;

struct Aprendiz {
  int num_mat;
  float ind_desemp;
  string nome;
};

int main (){

  Aprendiz elem1, elem2;

  cout << "\nDigite com o Nome do Estudante 1: ";
  cin.ignore();
  getline(cin, elem1.nome);
  cout << "\nDigite o Numero de Matricula do Estudante 1: ";
  cin >> elem1.num_mat;
  cout << "\nDigite o Indice de Desempenho do Estudante 1: ";
  cin >> elem1.ind_desemp;

  cout << "\nDigite com o Nome do Estudante 2: ";
  cin.ignore();
  getline(cin, elem2.nome);
  cout << "\nDigite o Numero de Matricula do Estudante 2: ";
  cin >> elem2.num_mat;
  cout << "\nDigite o Indice de Desempenho do Estudante 2: ";
  cin >> elem2.ind_desemp;

  cout << "Lista de desempenho:\n\n";
  cout << "\nEstudante 1: " << elem1.nome << " (" << elem1.num_mat << ") - Index: " << elem1.ind_desemp;
  cout << "\nEstudante 2: " << elem2.nome << " (" << elem2.num_mat << ") - Index: " << elem2.ind_desemp;
  cout << "\n";
  
  return 0;
}
