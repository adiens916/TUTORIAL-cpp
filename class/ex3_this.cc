#include <iostream>

using namespace std;

class MyClass {
 public:
  void printThis() {
    cout << "나의 주소는 " << this << endl;
  }
};

int main() {
  MyClass a, b;

  cout << "a의 주소는 " << &a << endl;
  cout << "b의 주소는 " << &b << endl;

  a.printThis();
  b.printThis();
}