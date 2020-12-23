#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  // 아까와 달리 cin으로부터 값을 받아옴
  // 그래서 방향이 반대쪽임

  // c에서는 %d, %f 처럼 입력 자료형을 알려줘야 함
  // c++은 "알아서" 넣음

  cout << a << " + " << b << " = " << a + b << endl;
}