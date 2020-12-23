#include <iostream>

using namespace std;

class Color {
private:
  float r;
  float g;
  float b;

public:
  Color() : r(0), g(0), b(0) {}
  Color(float r, float g, float b) : r(r), g(g), b(b) {}

  float getR() {return r;}
  float getG() {return g;}
  float getB() {return b;}

  void print() {
    cout << "r = " << r << ", g = " << g << ", b = " << b << endl;
  }
};

Color mixColors(Color c1, Color c2) {
  return Color(
    (c1.getR() + c2.getR()) / 2, 
    (c1.getG() + c2.getG()) / 2, 
    (c1.getB() + c2.getB()) / 2);
}

int main() {
  Color red(1, 0, 0);
  Color blue(0, 0, 1);
  
  Color purple = mixColors(red, blue);
  purple.print();
}