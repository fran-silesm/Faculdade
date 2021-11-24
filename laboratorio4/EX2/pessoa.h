//Francisco Siles Martins - 2020002294

#include <iostream>
#ifndef PESSOA_H
#define PESSOA_H

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;
    float h;

  public:
    Pessoa(); //construtor
    Pessoa(int, float, string); //inicializador
    ~Pessoa() { }; //destrutor

    //funcoes membro

    //getter
    int get_idade();
    float get_altura();
    string get_nome();

    //setter
    void set_idade(int);
    void set_altura(float);
    void set_nome(string);
};

 #endif
