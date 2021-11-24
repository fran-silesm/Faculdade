//Francisco Siles Martins - 2020002294

#include "vetor.h"
#include <iostream>
using namespace std;

Vector3D::Vector3D (int xx, int yy, int zz){
  x = xx;
  y = yy;
  z = zz;
}

//funcoes membro
Vector3D Vector3D::operator+(Vector3D& p){
  int xx, yy, zz;
  xx = x + p.x;
  yy = y + p.y;
  zz = z + p.z;
  return Vector3D{xx, yy, zz};
}

Vector3D Vector3D::operator-(Vector3D& p){
  int xx, yy, zz;
  xx = x - p.x;
  yy = y - p.y;
  zz = z - p.z;
  return Vector3D{xx, yy, zz};
}

Vector3D Vector3D::operator-(){
  int ix, iy, iz;
  ix = -x;
  iy = -y;
  iz = -z;
  return Vector3D{ix, iy, iz};
}

ostream& operator<< (ostream& out, const Vector3D& p){
  out << p.x << " " << p.y << " " << p.z;
  return out;
}

istream& operator>> (istream& in, Vector3D& p){
  in >> p.x >> p.y >> p.z;
  return in;
}
