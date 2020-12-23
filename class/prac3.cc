// 출력 결과 예상

#include <iostream>

using namespace std;

class MyClass {
public:
  MyClass() : num(cnt++), ch('\0') { }

  void check(MyClass *ptr) {
    if (ptr + num == this) {
      cout << num << endl;
    }
  }

  static int cnt;

private:
  int num;
  char ch;
};

int MyClass::cnt = 0;

int main() {
  MyClass obj[5];

  cout << "Test #1 : " << endl;
  for (int i = 0; i < 5; i++) {
    obj[i].check(obj);
  }

  cout << "Test #2 : " << endl;
  for (MyClass &i : obj) {
    i.check(obj);
  }

  cout << "cnt = " << MyClass::cnt << endl;
}

// 답
/*
0 1 2 3 4
0 1 2 3 4
5
*/

// 해설
/*
obj = &obj[0] = 0번째 원소 주소

*ptr
ptr + num = &ptr[num] 

ptr + num == this
: this는 자기 자신의 포인터 주소.
*/