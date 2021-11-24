//Francisco Siles Martins - 2020002294

#include <iostream>
#include <string>

using namespace std;

void converteAngulo();
void converteMoeda();
void endereco();

int main(){
  int esc;
  while(esc != 4){

    system("cls");
    cout << "1 - Converter Graus em Radianos\n";
    cout << "2 - Converter Reais em Dolares\n";
    cout << "3 - Entrar com seu endereco completo\n";
    cout << "4 - Sair do Programa\n";
    cout << "Selecione uma opcao(1-4): ";
    cin >> esc;

    switch(esc){
      case 1:
        converteAngulo();
        system("pause");
      break;
      case 2:
        converteMoeda();
        system("pause");
      break;
      case 3:
        endereco();
        system("pause");
      break;
      case 4:
        system("pause");
      break;
      default:
        system("cls");
        cout << "Escolha incorreta\n\n";
    }
  }
  cout << "Obrigado (a)";
  return 0;
}

void converteAngulo(){
  system("cls");
  float deg, rad;

  cout << "Digite o angulo em Graus: ";
  cin >> deg;
  rad = deg * 3.14159265359 / 180;
  cout << "Graus = " << deg << "   " << "Radianos = " << rad << "\n";
}

void converteMoeda(){
  system("cls");
  float real, cambio, dolar;

  cout << "Real R$: ";
  cin >> real;
  cout << "Taxa de Cambio: ";
  cin >> cambio;

  dolar = cambio * real;
  cout << "Equivalente em Dolares: U$" << dolar << "\n";
}

void endereco(){
  system("cls");
  string rua, bairro, cid, uf;
  int num, cep;

  cin.ignore();
  cout << "Rua: ";
  getline(cin, rua);
  cout << "\nNumero: ";
  cin >> num;
  cout << "\nCEP: ";
  cin >> cep;
  cout << "\nBairro: ";
  cin.ignore();
  getline(cin, bairro);
  cout << "\nCidade: ";
  getline(cin, cid);
  cout << "\nEstado: ";
  getline(cin, uf);

  cout << "\n{" << rua << "}, {" << num << "}, {" << bairro << "}, {" << cid << "} - {" << uf << "}, {" << cep << "}\n";
}
