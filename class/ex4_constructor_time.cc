#include <iostream>

using namespace std;

class MyClass {
 public:
  MyClass() {
    cout << "생성자가 실행되었습니다!" << endl;
  }

  // 소멸자는 앞에 ~ 붙임
  ~MyClass() {
    cout << "소멸자가 실행되었습니다!" << endl;
  }
};

MyClass globalObj;

void localObj() {
  cout << "생성자 in 함수!" << endl;
  cout << "소멸자 in 함수!" << endl;
}

// main 시작 전에 전역변수 생성자 실행
int main() {
  cout << "main 시작!" << endl;
  localObj(); // 함수 안에서 생성 후 소멸
  cout << "main 종료" << endl;
}
// main 끝나고 전역변수 소멸