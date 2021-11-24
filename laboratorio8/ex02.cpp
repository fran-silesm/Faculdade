//Francisco Siles Martins - 2020002294

#include <iostream>
using namespace std;

#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

class Investimento{
  protected:
    float vin, tax;

  public:
    Investimento(float vv, float tt) : vin{vv}, tax{tt} { }
    ~Investimento() { }

    virtual float retorno (int mes) {return 0; }

};

#endif

#ifndef PAPELBOLSA_H
#define PAPELBOLSA_H

class PapelBolsa : public Investimento{
  public:
    PapelBolsa(float vv, float tt) : Investimento{vv, tt} { }
    ~PapelBolsa() { }

    float retorno (int mes);

};

#endif

#ifndef RENDAFIXA_H
#define RENDAFIXA_H

class RendaFixa : public Investimento{
  public:
    RendaFixa(float vv, float tt) : Investimento{vv, tt} { }
    ~RendaFixa() { }

    float retorno (int mes);

};

#endif

#ifndef IMOBILIARIO_H
#define IMOBILIARIO_H

class Imobiliario : public Investimento{
  public:
    Imobiliario(float vv, float tt) : Investimento{vv, tt} { }
    ~Imobiliario() { }

    float retorno (int mes);

};

#endif

float PapelBolsa::retorno (int mes){
  float tp = 0.0, timp = 0.0, atual;
  atual = vin;
  for(int cont = 1; cont <= mes; cont++){
    if(cont%2 == 0){
      tp = atual + atual*tax;
      atual = tp;
    } else if(cont%2 != 0){
      timp = atual - atual*tax;
      atual = timp;
    }
  }
  return atual;
}

float RendaFixa::retorno (int mes){
  float sum;
  sum = vin;
  for(int cont = 1; cont <= mes; cont++){
    sum += sum*(tax - tax*0.15);
  }
  return sum;
}

float Imobiliario::retorno (int mes){
  float sum;
  sum = vin;
  for(int cont = 1; cont <= mes; cont++){
    sum = sum + sum*0.75*tax;
  }
  return sum;
}

int main() {
  int m = 0;
  float val_in, iPB, iRF, iIm;
  cout << "\n=== Programa de Rendimentos ===\n";

  cout << "Entre com os seguintes valores:\n";

  cout << "\nValor inicial da aplicacao (R$): ";
  cin >> val_in;

  cout << "\nTaxa do papel da bolsa: ";
  cin >> iPB;

  cout << "\nTaxa do fundo renda fixa: ";
  cin >> iRF;

  cout << "\nTaxa do fundo imobiliario: ";
  cin >> iIm;

  Investimento *op1 = new PapelBolsa{val_in, iPB};
  Investimento *op2 = new RendaFixa{val_in, iRF};
  Investimento *op3 = new Imobiliario{val_in, iIm};

  cout << "\nNumero de meses: ";
  cin >> m;

  cout << "\n\nExpectativa de rendimentos:\n";
  cout << "\nRendimento do papel da bolsa: " << op1->retorno(m);
  cout << "\nRendimento do fundo renda fixa: " << op2->retorno(m);
  cout << "\nRendimento do fundo imobiliario: " << op3->retorno(m);

  cout << "\n--Fim do programa--\n";


  return 0;
}
