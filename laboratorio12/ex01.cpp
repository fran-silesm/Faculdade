//Francisco Siles Martins - 2020002294

#include <iostream>
#include <stack>
using namespace std;

int main() {
  int esc = 0, elem = 0;
  stack<int> pilha;

  do{
    cout << "\n\n---------------------------\n";
    cout << "Programa de Pilha STL";
    cout << "\n---------------------------\n";
    cout << "\n1.Insira um elemento na pilha";
    cout << "\n2.Remova um elemento da pilha";
    cout << "\n3.Tamanho da pilha";
    cout << "\n4.Primeiro elemento da pilha";
    cout << "\n5.Sair";
    cout << "\n\nEscolha um numero das opcoes acima (de 1 a 5): ";
    cin >> esc;

    switch (esc) {
      case 1:
        cout << "\nEntre com o valor a ser inserido: ";
        cin >> elem;
        pilha.push(elem);
        cout << "\nElemento " << elem << " inserido.";
      break;
      case 2:
        cout << "\nElemento " << pilha.top() << " removido.";
        pilha.pop();
      break;
      case 3:
        cout << "\nTamanho da pilha: " << pilha.size();
      break;
      case 4:
        cout << "\nPrimeiro elemento da pilha: " << pilha.top();
      break;
      case 5:
        cout << "\nObrigado!\n";
      break;
      default:
        cout << "\n\nEscolha invalida\n\n";
    }
  }while(esc != 5);
  cout << "\n\nPrograma finalizado!\n\n";
  return 0;
}
