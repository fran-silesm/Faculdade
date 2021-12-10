//Francisco Siles Martins - 2020002294

#include <iostream>
#include <list>
using namespace std;

int main() {
  int esc = 0, elem = 0, tam = 0, remv = 0;
  list<int> list;

  do{
    cout << "\n===============================";
    cout << "\nImplementacao de Lista no STL";
    cout << "\n===============================";
    cout << "\n\n1.Inserir elemento na frente";
    cout << "\n2.Inserir elemento no final";
    cout << "\n3.Excluir elemento na frente";
    cout << "\n4.Excluir elemento no final";
    cout << "\n5.Exibir primeiro elemento da lista";
    cout << "\n6.Exibir ultimo elemento da lista";
    cout << "\n7.Tamanho da lista";
    cout << "\n8.Redimensionar lista";
    cout << "\n9.Remover elementos com valores especificos";
    cout << "\n10.Remover valores duplicados";
    cout << "\n11.Reverter a ordem dos elementos";
    cout << "\n12.Ordenar a lista";
    cout << "\n13.Sair";
    cout << "\nEscolha um numero das opcoes acima (de 1 a 13): ";
    cin >> esc;

    switch (esc) {
      case 1:
        cout << "\nEntre com o valor a ser inserido no comeco da lista: ";
        cin >> elem;
        list.push_front(elem);
        cout << "\nElemento " << elem << " inserido no inicio.";
      break;
      case 2:
        cout << "\nEntre com o valor a ser inserido no fim da lista: ";
        cin >> elem;
        list.push_back(elem);
        cout << "\nElemento " << elem << " inserido no final.";
      break;
      case 3:
        if(!list.empty()){
          cout << "\nElemento " << list.front() << " removido do inicio da lista.";
          list.pop_front();
        }else{
          cout << "\nLista vazia. Insira elementos.";
        }
      break;
      case 4:
        if(!list.empty()){
          cout << "\nElemento " << list.back() << " removido do fim da lista.";
          list.pop_back();
        }else{
          cout << "\nLista vazia. Insira elementos.";
        }
      break;
      case 5:
        if (!list.empty()){
          cout << "\nPrimeiro elemento da lista: " << list.front();
        }else{
          cout << "\nLista vazia. Insira elementos.";
        }
      break;
      case 6:
        if (!list.empty()){
          cout << "\nUltimo elemento da lista: " << list.back();
        }else{
          cout << "\nLista vazia. Insira elementos.";
        }
      break;
      case 7:
        cout << "\nTamanho da lista: " << list.size();
      break;
      case 8:
        cout << "\nInsira o novo tamanho da lista: ";
        cin >> tam;
        list.resize(tam);
        cout << "\nLista com tamanho: " << list.size();
      break;
      case 9:
        if(!list.empty()){
          cout << "\nQual valor voce deseja remover da lista? ";
          cin >> remv;
          list.remove(remv);
          cout << "\nElemento " << remv << " removido da lista.";
        }else{
          cout << "\nLista vazia. Insira elementos.";
        }
      break;
      case 10:
        list.sort();
        list.unique();
        cout << "\nOs elementos duplicados na lista foram removidos.";
      break;
      case 11:
        list.reverse();
        cout << "\nOrdem dos elementos foi invertida.";
      break;
      case 12:
        list.sort();
        cout << "\nLista ordenada.";
      break;
      case 13:
        cout << "\nObrigado!\n";
      break;
      default:
        cout << "\n\nEscolha invalida\n\n";
    }

    cout << "\nLista atual: \n";
    for (std::list<int>::iterator i = list.begin(); i != list.end(); ++i)
      cout << ' ' << *i;

  }while(esc != 13);

  cout << "\n\nPrograma finalizado!\n\n";
  return 0;
}
