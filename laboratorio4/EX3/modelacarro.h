//Francisco Siles Martins - 2020002294

#include <iostream>
#ifndef MODELACARRO_H
#define MODELACARRO_H

using namespace std;

class ModelaCarro {
  private:
    float dist, gas;

  public:
    ModelaCarro(); //construtor
    ModelaCarro(float, float); //inicializador
    ~ModelaCarro() { }; //destrutor

    //funcoes membro
    float abasteceCarro(float);
    float deslocaCarro(float);
    float sobragas();
    float distpercorrida();

    //getter
    float get_gas();
    float get_dist();
};

 #endif
