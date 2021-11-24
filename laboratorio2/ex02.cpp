//Francisco Siles Martins - 2020002294

#include <iostream>

using namespace std;

const int m = 34;

int main (){
  int i = 0,  p = 1;

  for (i = 0; i < m; i += p){
    cout << i << " ";
    p++;
  }

  return 0;
}

/*
 O erro era declarar o p como constante. Assim, a variavel nao poderia
 ser alterada dentro do for. Para corrigir o codigo basta declarar p como
 uma variavel do tipo inteiro.
*/
