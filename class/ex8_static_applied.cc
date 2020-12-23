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

  void print() {
    cout << "r = " << r << ", g = " << g << ", b = " << b << endl;
  }

  // 함수를 클래스로 옮기고
  // 앞에 static 붙이기
  // accessor 대신에 직접 멤버변수 참조하는 식으로 변경
  // -> 코드 길이 감소
  static Color mixColors(Color c1, Color c2) {
  return Color(
    (c1.r + c2.r) / 2, 
    (c1.g + c2.g) / 2, 
    (c1.b + c2.b) / 2);
  }

  /*
  static 
  -> 내부에서 private 접근 가능
  -> 접근자 함수 필요없으므로 제거

  float getR() {return r;}
  float getG() {return g;}
  float getB() {return b;} 
  */
};

int main() {
  Color red(1, 0, 0);
  Color blue(0, 0, 1);
  
  Color purple = Color::mixColors(red, blue);
  purple.print();
}