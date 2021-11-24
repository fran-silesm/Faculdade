//Francisco Siles Martins - 2020002294

#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
  Pilha(p);

  cout << "Inserindo elementos... \n";
  p.insere(20);
  
  cout << "Pilha esta vazia ?";
  if (p.empty()){
    cout << "SIM \n";
  }else{
    cout << "NAO \n";
  }

  cout << "Inserindo elementos... \n";
  p.insere(18);
  p.insere(09);
  p.insere(01);

  cout << "Topo: " << p.topo() << endl;
  cout << "Retirando elemento " << p.remove() << endl;
  cout << "Retirando elemento " << p.remove() << endl;
  cout << "Topo: " << p.topo() << endl;

  return 0;
}
