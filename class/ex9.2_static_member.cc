#include <iostream>

using namespace std;

// int idCounter = 1;
// id가 클래스에서 자주 쓰이니까, 클래스 안으로 옮기기

class Color {
private:
  float r;
  float g;
  float b;
  int id;

public:
  // static int idCounter = 1;
  // 안으로 옮겼는데 = 1 대입하는 건 안됨
  // <- static은 클래스랑 관련이 있는데, 객체 생성 때마다 1씩 넣는 건 객체랑 관련...
  // 즉 객체에서 주제넘는 짓이 되어버림
  // -> 선언과 정의를 분리하고, 밖에서 초기화해줘야 함
  static int idCounter; 

  Color() : r(0), g(0), b(0), id(idCounter++) { }  
  Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}

  static Color mixColors(Color c1, Color c2) {
  return Color(
    (c1.r + c2.r) / 2, 
    (c1.g + c2.g) / 2, 
    (c1.b + c2.b) / 2);
  }

  void printId() { cout << "id = " << id << endl; }
  void printColor() { cout << "r = " << r << ", g = " << g << ", b = " << b << endl; }
};

// 정적 변수를 클래스 밖에서 정의
// 이때 클래스 이름을 씀으로써 정적 변수 참조 가능 (namespace와 비슷)
// 앞에 자료형 붙여줘야 함
int Color::idCounter = 1;

int main() {
  Color red(1, 0, 0);
  Color blue(0, 0, 1);
  
  Color purple = Color::mixColors(red, blue);
  purple.printColor();

  red.printId();
  blue.printId();
  purple.printId();
}