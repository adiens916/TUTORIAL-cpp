#include <iostream>

using namespace std;

int idCounter = 1;

class Color {
private:
  float r;
  float g;
  float b;
  int id;

public:
  Color() : r(0), g(0), b(0) {
    id = idCounter++;
  }
  // 아래처럼 변수를 밖으로 끄집어내서 "초기화 목록"으로도 가능
  // 이때 () 안에선 단항연산(++)도 가능
  // <- 그냥 괄호 안에 있던 걸 밖으로 끄집어낸 셈이니까
  Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}

  static Color mixColors(Color c1, Color c2) {
  return Color(
    (c1.r + c2.r) / 2, 
    (c1.g + c2.g) / 2, 
    (c1.b + c2.b) / 2);
  }

  void printId() {
    cout << "id = " << id << endl;
  }

  void printColor() {
    cout << "r = " << r << ", g = " << g << ", b = " << b << endl;
  }
};

int main() {
  Color red(1, 0, 0);
  Color blue(0, 0, 1);
  
  Color purple = Color::mixColors(red, blue);
  purple.printColor();

  red.printId();
  blue.printId();
  purple.printId();
}