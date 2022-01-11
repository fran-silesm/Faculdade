//Francisco Siles Martins - 2020002294

#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> prioridade;

int main() {

  int e = 0, v = 0;

  do{
    cout << "\n-------------------------------------------------\n";
    cout << "Programa de Heap STL\n";
    cout << "-------------------------------------------------\n";
    cout << "1 - Insira um elemento na heap;\n";
    cout << "2 - Remova um elemento da heap;\n";
    cout << "3 - Tamanho da heap;\n";
    cout << "4 - Primeiro elemento da heap;\n";
    cout << "5 - Sair;\n";
    cout << "\nEscolha um numero de 1 a 5: ";
    cin >> e;

    switch(e){
      case 1:
        cout << "\nEntre com o valor a ser inserido: ";
        cin >> v;
        prioridade.push(v);
        cout << "\nValor inserido com sucesso.\n";
      break;

      case 2:
        if(!prioridade.empty())
        {
          cout << prioridade.top() << " foi removido do topo da heap!\n";
          prioridade.pop();
        } else {
          cout << "\nNao existe elemento para ser removido!\n";
        }
      break;

      case 3:
        cout << "\nTamanho da heap: "<< prioridade.size();
      break;

      case 4:
        cout << "\nPrimeiro elemento da heap: "<< endl;
        cout << prioridade.top();
      break;

      case 5:
        cout << "\n\nPrograma Finalizado!\n\n";
      break;

      default:
        cout << "\nOpcao invalida, escolha outra.\n";
      break;
    }
  }while (e != 5);

  return 0;
}
