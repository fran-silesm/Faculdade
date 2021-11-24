//Francisco Siles Martins - 2020002294

#include "modelacarro.h"
#include <iostream>

using namespace std;

ModelaCarro::ModelaCarro(){
  dist = gas = 0;
}

ModelaCarro::ModelaCarro(float dd, float gg){
  dist = dd;
  gas = gg;
}

//funcoes membro
float ModelaCarro::abasteceCarro(float g){
  gas += g;
  cout << "Abastecendo...\n";
}

float ModelaCarro::deslocaCarro(float d){
  dist = d;
}

float ModelaCarro::sobragas(){
  return gas - (dist/15);
}

float ModelaCarro::distpercorrida(){
  return (gas*15) - dist;
}

float ModelaCarro::get_gas(){
  return gas;
}

float ModelaCarro::get_dist(){
  return dist;
}
