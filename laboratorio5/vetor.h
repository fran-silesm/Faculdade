//Francisco Siles Martins - 2020002294

#ifndef VETOR_H
#define VETOR_H

#include <iostream>
using namespace std;

class Vector3D {
  private:
    int x, y, z;

  public:
    Vector3D (int = 0, int = 0, int = 0); //construtor
    ~Vector3D(){ } // destrutor

    //funcoes membro
    Vector3D operator+(Vector3D&);
    Vector3D operator-(Vector3D&);
    Vector3D operator-();

    friend ostream& operator<< (ostream& out, const Vector3D& p);
    friend istream& operator>> (istream& in, Vector3D& p);

};

#endif
