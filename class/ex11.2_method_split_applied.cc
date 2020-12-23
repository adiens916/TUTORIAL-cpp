#include <iostream>

using namespace std;

class Vector2d {
public:
  // 선언
  Vector2d();
  Vector2d(float x, float y);

  float getX() const;
  float getY() const;
  void print() const;

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

// 생성자 정의
Vector2d::Vector2d() : x(0), y(0) {}
Vector2d::Vector2d(float x, float y) : x(x), y(y) {}

// 메서드 정의
// 메서드는 앞에 자료형을 붙여준다.
float Vector2d::getX() const { return x; }
float Vector2d::getY() const { return y; }
void Vector2d::print() const {
  cout << x << ", " << y << endl;
}