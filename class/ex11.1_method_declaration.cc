#include <iostream>

using namespace std;

class Vector2d {
public:
  Vector2d() : x(0), y(0) { }
  Vector2d(float x, float y) : x(x), y(y) { }

  float getX() { return x; }
  float getY() { return y; }

private:
  float x;
  float y;
};

int main() {
  Vector2d a(2, 3);
  Vector2d b(-1, 4);
  
  a.print();
  b.print(); 
}