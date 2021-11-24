//Francisco Siles Martins - 2020002294

#include <iostream>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
  protected:
    float larg, alt;
  public:
    Shape (float l = 0.0, float h = 0.0) : larg{l}, alt{h} { }
    ~Shape () { }

    //sobrecarga
    friend ostream& operator<<(ostream&, const Shape&);
    friend istream& operator>>(istream&, Shape&);
};

#endif

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Shape {
  public:
    Triangle (float b = 0.0, float h = 0.0) : Shape{b, h} { }
    ~Triangle () { }

    float area() {return (larg * alt) / 2; }
};

#endif

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape {
  public:
    Rectangle (float ll = 0.0, float hh = 0.0) : Shape{ll, hh} { }
    ~Rectangle () { }

    float area() {return larg * alt; }
};

#endif

ostream& operator<<(ostream& out, const Shape& v){
  out << "\nLargura: " << v.larg << "\nAltura: " << v.alt;
  return out;
}

istream& operator>>(istream& in, Shape& v){
  in >> v.larg >> v.alt;
  return in;
}

int main(){
  Triangle t (10, 5), newt;
  Rectangle r (10, 5), newr;

  cout << "\n\n~INSERINDO ELEMENTOS~\n\n";
  cout << "\nEntre com base e altura do triangulo: ";
  cin >> newt;
  cout << "\nEntre com largura e altura do retangulo: ";
  cin >> newr;
  
  cout << "\nTriangulo 1:" << t;
  cout << "\n\nTriangulo 2:" << newt;

  cout << "\n\nRetangulo 1:" << r;
  cout << "\n\nRetangulo 2:" << newr;

  cout << "\n\n~CALCULO DE AREA~\n\n";
  cout << "\nArea do Triangulo 1: " << t.area();
  cout << "\nArea do Triangulo 2: " << newt.area();

  cout << "\n\nArea do Retangulo 1: " << r.area();
  cout << "\nArea do Retangulo 2: " << newr.area();

  return 0;
}
