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

  // const로 바꿀 수 있는 건 전부 바꾸는 게 좋다.
  // 아래에선 x, y 값 바뀔 부분이 없고 전부 읽기만 함
  // : const 쓸 수 있음.
  // + 선언 정의 분리도 할 수 있으면 좋음.
  Vector2d operator+(const Vector2d rhs) const;
  Vector2d operator-(const Vector2d rhs) const;
  // 실수 곱하기 = 각 요소들을 실수 배
  Vector2d operator*(const float rhs) const;
  Vector2d operator/(const float rhs) const;
  // 내적: 실수값이 나옴
  float operator*(const Vector2d rhs) const;

private:
  float x;
  float y;
};

// 실수가 먼저 오는 경우, 뒤에 operator 멤버 메서드 갖는 건 불가
// <- 실수는 클래스가 아니니까...
// -> 따로 해결해줘야 함
Vector2d operator*(const float f, const Vector2d v) {
  return Vector2d(f * v.getX(), f * v.getY());
}

int main() {
  Vector2d a(2, 3);
  Vector2d b(-1, 4);

  Vector2d c1 = a.operator+(b);
  Vector2d c2 = a + b;

  Vector2d c3 = a - b;
  Vector2d c4 = a * 1.6;
  Vector2d c5 = a / 3;
  float c6 = a * b;
  
  Vector2d c7 = 1.6 * a;

  a.print();
  b.print();

  c1.print();
  c2.print();

  c3.print();
  c4.print();
  c5.print();
  cout << c6 << endl;
  c7.print();
}

Vector2d::Vector2d() : x(0), y(0) {}
Vector2d::Vector2d(float x, float y) : x(x), y(y) {}

float Vector2d::getX() const { return x; }
float Vector2d::getY() const { return y; }
void Vector2d::print() const {
  cout << x << ", " << y << endl;
}

Vector2d Vector2d::operator+(const Vector2d right) const {
  return Vector2d(x + right.x, y + right.y);
}
Vector2d Vector2d::operator-(const Vector2d right) const {
  return Vector2d(x - right.x, y - right.y);
}
Vector2d Vector2d::operator*(const float right) const {
  return Vector2d(x * right, y * right);
}
Vector2d Vector2d::operator/(const float right) const {
  return Vector2d(x / right, y / right);
}
float Vector2d::operator*(const Vector2d right) const {
  return x * right.x + y * right.y;
}