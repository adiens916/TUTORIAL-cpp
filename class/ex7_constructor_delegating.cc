#include <iostream>

using namespace std;

class Time {
private:
  int h;
  int m;
  int s;

public:
  Time() : h(0), m(0), s(0) {}
  Time(int s_) : Time() {
    s = s_;
  }
  Time(int m_, int s_) : Time(s_) {
    m = m_;
  }
  Time(int h_, int m_, int s_) : Time(m_, s_) {
    h = h_;
  }

  void print() {
    cout << h << ":" << m << ":" << s << endl;
  }
};

int main() {
  Time t1;
  Time t2(15);
  Time t3(2, 30);
  Time t4(6, 30, 20);

  t1.print();
  t2.print();
  t3.print();
  t4.print();
}