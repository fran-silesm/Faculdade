//Francisco Siles Martins - 2020002294

#ifndef BOX_H
#define BOX_H

#include <iostream>
using namespace std;


class Box {
  // entre com seu código aqui!
  private:
    float w, p, h;
  public:
    Box(float ww=0, float pp=0, float hh=0) : w{ww}, p{pp}, h{hh} { }
    ~Box() { }

    //funcoes membro
    double getVolume () {return w*p*h;}
    Box operator+(Box&);

    //setter
    void setLength(float v) { w = v; }
    void setBreadth(float v) { p = v; }
    void setHeight(float v) { h = v; }
};

#endif
