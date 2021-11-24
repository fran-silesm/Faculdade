//Francisco Siles Martins - 2020002294

#ifndef RETANGULO_H
#define RETANGULO_H

class Ret{
  private:
    float larg, alt;

  public:
    Ret();
    Ret(float, float);
    ~Ret() { }

  //funcoes membro
  float area();
  float perimetro();
};

#endif
