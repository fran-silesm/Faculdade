//Francisco Siles Martins - 2020002294

#include <iostream>
#include <set>

using namespace std;

multiset<int> arvore;
multiset<int> ::iterator it, itlow, itup, prim, ult;

int main() {

  int e = 0, v = 0;

  do{
    cout << "\n\n=================================================\n";
    cout << "Implementacao de Arvore (set) no STL\n";
    cout << "=================================================\n";

    cout << "1 - Inserir elemento;\n";
    cout << "2 - Remover elementos com determinado valor;\n";
    cout << "3 - Exibir elementos em ordem;\n";
    cout << "4 - Exibir quantidades de elementos;\n";
    cout << "5 - Remover todos os elementos;\n";
    cout << "6 - Consultar quantidade de elementos com determinado valor;\n";
    cout << "7 - Sair;\n";

    cout << "\nEscolha uma opcao de 1 a 7: ";
    cin >> e;

    switch(e){
      case 1:
        cout << "\nEntre com o valor a ser inserido: ";
        cin >> v;
        arvore.insert(v);
        cout << "\nValor inserido com sucesso.\n";
      break;

      case 2:
        if(arvore.empty()){
          cout << "\nA arvore nao tem elementos para remover.";
        }else{
          cout << "\nEntre com o valor a ser removido: ";
          cin >> v;
          arvore.erase(v);
          cout << "\n" << v << " foi removido da arvore!\n";
        }
      break;

      case 3:
        cout << "\nElementos da arvore: ";
        if (arvore.empty()){
          cout << "\nArvore sem elementos.";
        }else{
          for(it = arvore.begin(); it != arvore.end(); ++it)
            cout<< *it << " ";
        }
      break;

      case 4:
        cout << "\nTamanho da arvore: "<< arvore.size();
      break;

      case 5:
        if (arvore.empty()){
          cout << "\nArvore sem elementos para remover.";
        }else{
          prim = arvore.begin();
          ult = arvore.end();
          itlow = arvore.lower_bound(*prim);
          itup = arvore.upper_bound(*ult);
          arvore.erase(itlow,itup);

          cout << "\nTodos elementos foram removidos!";
        }
      break;

      case 6:
        cout << "\nEntre com o valor a ser consultado: ";
        cin >> v;
        cout << "\nExistem " << arvore.count(v) << " desse elemento na arvore.";
      break;

      case 7:
        cout << "\n\nPrograma Finalizado!\n\n";
      break;

      default:
        cout << "\nOpcao invalida, escolha outra.\n";
      break;
    }
  }while (e != 7);

  return 0;

}
