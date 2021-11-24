//Francisco Siles Martins - 2020002294

#include <iostream>

using namespace std;

#ifndef ESTUDANTE_H
#define ESTUDANTE_H

class Estudante {
  private:
    int nota1, nota2;
    string nome;

  public:
    Estudante();
    Estudante(int, int, string);
    ~Estudante() { }

     //funcoes membro interface
     int calcula_media();
     void imprime();
};

#endif
