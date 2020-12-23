#include <iostream>

using namespace std;

int main() {
  string str;
  str = "Hello, World!";
  cout << str << endl;

  // 장점 1. 배열이 아님 -> 길이 무한정으로 줄 수 있음
  
  // 장점 2. 문자열 조작 편해짐
  string name;
  
  cout << "이름 입력 : ";
  cin >> name;
  
  string message = "안녕하세요, " + name + "님!"; // 더하기 가능
  cout << message << endl;
}