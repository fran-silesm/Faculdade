//Francisco Siles Martins - 2020002294

#include <iostream>
#include "box.h"
using namespace std;

Box Box::operator+(Box& box){
  float a, b, c;
  a = h + box.h;
  b = p + box.p;
  c = w + box.w;
  return Box{a, b, c};
}
