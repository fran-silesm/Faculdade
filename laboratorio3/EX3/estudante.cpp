//Francisco Siles Martins - 2020002294

#include "estudante.h"

Estudante::Estudante(int num1, int num2,string str){
  nota1 = num1;
  nota2 = num2;
  nome = str;
}

int Estudante::calcula_media(){
  return (nota1 + nota2)/2;
}

void Estudante::imprime(){
  cout << "\nNome do aluno: " << nome;
  cout << "\nNota 1: " << nota1;
  cout << "\nNota 2: " << nota2;
  cout << "\nO aluno " << nome << " tem notas " << nota1 << " e " << nota2 << ", com media " << calcula_media();
}
