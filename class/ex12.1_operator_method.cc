#include <iostream>

using namespace std;

class Vector2d {
public:
  Vector2d();
  Vector2d(float x, float y);

  float getX() const;
  float getY() const;
  void print() const;

  static Vector2d sum(Vector2d a, Vector2d b) {
    return Vector2d(a.x + b.x, a.y + b.y);
  }

  /* Vector2d add(Vector2d right) {
    return Vector2d(x + right.x, y + right.y);
  } */

  // operator+ 는 예약어
  Vector2d operator+(Vector2d right) {
    return Vector2d(x + right.x, y + right.y);
  }

private:
  float x;
  float y;
};

int main() {
  Vector2d a(2, 3);
  Vector2d b(-1, 4);
  // operator+ 덕분에 클래스들도 일반적인 더하기 연산 가능
  Vector2d c1 = a.operator+(b);
  // + 자체도 메서드인데, 좀 더 편하게 쓸 수 있다고 생각?
  Vector2d c2 = a + b;
  
  a.print();
  b.print();

  c1.print();
  c2.print();
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