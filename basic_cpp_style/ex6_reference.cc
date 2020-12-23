#include <iostream>

using namespace std;

int main() {
  int a(10); // c++ 스타일 변수 선언

  // 포인터 이용
  int *p = &a;
  *p = 20;
  cout << a << endl;
  
  // 레퍼런스
  int &q = a; // & 달린 레퍼런스 변수 선언
  q = 30; // 참조 연산자 없어도 a 값 변경
  cout << a << endl;

  // 틀린 레퍼런스
  int var(10);
  int &r1 = var; // OK
//  int &r2 = 3; // 메모리 주소 불러오는데, 상수는 메모리 저장 X (자연수는 무한)
//  int &r3 = var * var // 곱하면 자연수, 즉 상수이므로 메모리 주소 X

  // r-value 참조 레퍼런스
  // r-value: = 오른쪽에 있는 값 = 수정할 수 없는 값
  // l-value: 왼쪽에 있는 값 = 수정할 수 있음 = 변수
//  int &&r4 = var;
  int &&r5 = 3; // 수정할 수 없는 값들이므로 &&, 즉 r-value에 저장 가능
  int &&r6 = var * var;

}

// * 대신 &를 사용한 swap
void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}