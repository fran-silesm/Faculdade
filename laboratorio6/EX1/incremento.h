//Francisco Siles Martins - 2020002294

#ifndef INCREMENTO_H
#define INCREMENTO_H

#include <iostream>
using namespace std;

class InteiroEspecial {
  private:
    int e;

  public:
    InteiroEspecial(int ee = 0) : e{ee} { } //construtor
    ~InteiroEspecial() { } // destrutor

    //funcoes membro
    //Incremento
    InteiroEspecial& operator++();
    InteiroEspecial operator++(int);

    //Decremento
    InteiroEspecial& operator--();
    InteiroEspecial operator--(int);

    friend ostream& operator<<(ostream&, const InteiroEspecial&);
    friend istream& operator>>(istream&, InteiroEspecial&);
};

#endif
