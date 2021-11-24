//Francisco Siles Martins - 2020002294

#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
using namespace std;

class Complexo {
  private:
    double re, im;

  public:
    Complexo(double rr = 0, double ii = 0); //construtor
    ~Complexo() { } // destrutor

    //funcoes membro
    float angulo();
    float modulo();

    bool operator>(Complexo&);
    bool operator==(Complexo&);

    friend ostream& operator<<(ostream&, const Complexo&);
    friend istream& operator>>(istream&, Complexo&);
};

#endif
