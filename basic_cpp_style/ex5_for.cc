// 범위 기반 for 문

#include <iostream>

using namespace std;

int main() {
  int arr[10] = {3, 1, 3, 5, 6, 3, 2, 1, 4, 9};

  // 배열에서 하나씩 빼와서 처리
  for (int n : arr) {
    cout << n << ' ';
    n++;
  }
  cout << endl;

  // &를 붙이면 내부 값 변경도 가능
  for (int &n : arr) { // n이 arr에 대한 레퍼런스 변수가 됨
    cout << n << ' ';
    n++;
  }
  cout << endl;

  // 출력해보면 arr 값 증가한 걸 확인 가능
  for (int n : arr) {
    cout << n << ' ';
  }
}