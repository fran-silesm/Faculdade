//Francisco Siles Martins - 2020002294

#include <iostream>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente {
  protected:
    int idade;
    string nome, endr;
  public:
    Cliente(int i = 0, string no = " ", string e = " ")
            : idade{i}, nome{no}, endr{e} { }
    ~Cliente() { }

    virtual void print();
    virtual float saque(float) {return 0; }
    virtual float deposito(float) {return 0; }
};

#endif

#ifndef CONTA_H
#define CONTA_H

class Conta : public Cliente{
  protected:
    int num, ag;
    float saldo;
  public:
    Conta(int i = 0, string no = " ", string e = " ", int nm = 0, int a = 0, float s = 0.0)
          : Cliente{i, no, e}, num{nm}, ag{a}, saldo{s} { }
    ~Conta() { }

    void print();
    float saque(float);
    float deposito(float);
};

#endif

#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

class ContaEspecial : public Conta{
  protected:
    float limite;
  public:
    ContaEspecial(int i = 0, string no = " ", string e = " ", int nm = 0, int a = 0, float s = 0.0, float l = 0.0)
          : Conta{i, no, e, nm, a, s}, limite{l} { }
    ~ContaEspecial() { }

    void print();
    float saque(float);
    float deposito(float);
};

#endif

void Cliente::print(){
  cout << "\nCliente: ";
  cout << "\n\nNome: " << nome;
  cout << "\nIdade: " << idade;
  cout << "\nEndereco: " << endr;
}

void Conta::print(){
  Cliente::print();
  cout << "\nNumero da conta: " << num;
  cout << "\nAgencia: " << ag;
  cout << "\nSaldo: " << saldo;
}

float Conta::saque(float valor){

  if (saldo < valor){
    cout << "\nSem saldo suficiente!";
  }else{
    saldo -= valor;
    cout << "\nSaque efetuado!";
  }
  return saldo;
}

float Conta::deposito(float valor){
  saldo += valor;
  cout << "\nDeposito efetuado!";
  return saldo;
}

void ContaEspecial::print(){
  Conta::print();
  cout << "\nLimite: " << limite;
}

float ContaEspecial::saque(float valor){
  float aux;

  if (valor > (saldo + limite)){
    cout << "\nNao e possivel efetuar!";
  }

  if (valor <= saldo){
    cout << "\nSaque efetuado!";
    saldo = saldo - valor;
    return saldo;
  }else{
    aux = limite - (valor - saldo);
    saldo = aux - limite;
    cout << "\nNao e possivel efetuar!";
    return saldo;
  }
  cout << "\nSaque efetuado!";
}

float ContaEspecial::deposito(float valor){
  saldo += valor;
  cout << "\nDeposito efetuado!";
  return saldo;
}

int main() {
  Cliente *vet_pessoas[2];
  vet_pessoas[0] = new Conta{18, "Eduardo Siles", "Rua Marechal Dourado, Salvador - Ba", 12345, 31, 500};
  vet_pessoas[1] = new ContaEspecial{20, "Francisco Siles", "Rua Marechal Dourado, Salvador - Ba", 54321, 31, 750, 750};

  for(auto x : vet_pessoas){
    x->print();
    cout << "\n\n";
  }

  cout << "\nEduardo depositou R$500,00.";
  vet_pessoas[0]->deposito(500);
  cout << "\nEduardo quer sacar R$1500,00.";
  vet_pessoas[0]->saque(1500);
  cout << "\nFrancisco fez um pix de R$700,00 para o Eduardo.";
  vet_pessoas[1]->saque(700);
  vet_pessoas[0]->deposito(700);
  cout << "\nAssim, o Dudu conseguiu sacar R$1500,00.";
  vet_pessoas[0]->saque(1500);

  cout << "\nFrancisco saca R$25,00.";
  vet_pessoas[1]->saque(25);
  cout << "\nFrancisco saca R$50,00.";
  vet_pessoas[1]->saque(50);
  cout << "\nNo proximo mes, Francisco recebe R$750,00 e saca R$100,00.";
  vet_pessoas[1]->deposito(750);
  vet_pessoas[1]->saque(100);

  for(auto x : vet_pessoas){
    x->print();
    cout << "\n\n";
  }

  cout << "\nPrograma Finalizado!";

  return 0;
}
