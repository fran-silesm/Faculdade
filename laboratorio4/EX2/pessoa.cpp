//Francisco Siles Martins - 2020002294

#include "pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(){
  idade = 0;
  h = 0.0;
  nome = "Indefinido";
}

Pessoa::Pessoa(int ii, float hh, string nn){
  idade = ii;
  h = hh;
  nome = nn;
}

//funcoes membro

//getter
int Pessoa::get_idade(){
  return idade;
}

float Pessoa::get_altura(){
  return h;
}

string Pessoa::get_nome(){
  return nome;
}

//setter
void Pessoa::set_idade(int ii){
  idade = ii;
}

void Pessoa::set_altura(float hh){
  h = hh;
}

void Pessoa::set_nome(string nn){
  nome = nn;
}
