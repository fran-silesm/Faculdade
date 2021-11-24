//Francisco Siles Martins - 2020002294

#include <iostream>
#include "box.h"
using namespace std;

// Main function for the program
int main() {
  Box box1;
  Box box2;
  Box box3;
  double volume = 0.0;

  // box 1 specification
  box1.setLength(6.0);
  box1.setBreadth(7.0);
  box1.setHeight(5.0);

  // box 2 specification
  box2.setLength(12.0);
  box2.setBreadth(13.0);
  box2.setHeight(10.0);

  // volume of box 1
  volume = box1.getVolume();
  cout << "Volume de box1: " << volume <<endl;

  // volume of box 2
  volume = box2.getVolume();
  cout << "Volume de box2: " << volume <<endl;

  // Add two object as follows:
  box3 = box1 + box2;

  // volume of box 3
  volume = box3.getVolume();
  cout << "Volume de box3: " << volume <<endl;

  return 0;
}
