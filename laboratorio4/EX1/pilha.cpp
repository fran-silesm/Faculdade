//Francisco Siles Martins - 2020002294

#include "pilha.h"
#include <iostream>

using namespace std;

void Pilha::aloca_memoria(){
  if (tam > 0) {
    dados = new int[tam];
  }else {
    dados = nullptr;
  }
}

Pilha::Pilha(){
  h = -1;
  tam = 5; //tamanho da pilha
  aloca_memoria();
}

Pilha::Pilha(int size){
  // o if verifica se o tamanho da pilha e um numero natural
  if(size < 0){
    size = 0;
  }
  tam = size;
  h = -1;
  aloca_memoria();
  cout << "Criando pilha... \n";
}

Pilha::~Pilha(){
  if (dados != nullptr){
    delete[] dados;
  }
  cout << "Destruindo pilha... \n";
}

bool Pilha::empty(){
  return (h == -1 ? true:false);
}

void Pilha::insere(int n){
  if (dados != nullptr && h != tam-1){
    h++;
    dados[h] = n;
  }
}

int Pilha::topo(){
  if(!empty()){
    return dados[h];
  }
}

int Pilha::remove(){
  if(!empty()){
    return dados[h--];
  }
}
