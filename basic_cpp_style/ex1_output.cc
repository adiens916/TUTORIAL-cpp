#include <iostream>
// stdio.h 대신에 iostream 포함
// input stream, output stream 을 포함하는 더 방대한 클래스 (약 1000 줄)

using namespace std;

int main() {
  std::cout << "Hello, World!" << std::endl;
  
  // std: name space = 이름 공간 
  // -> 이름들 구분
  
  // <<: 데이터 구분 / 분리
  // printf("%d %d", 10, 20)의 쉼표와 같음
  std::cout << "Hello, World!" << 10 << 'c' << std::endl;

  // endl = end line = 줄 바꿈
  // std::endl 대신에 '\n' 대체해도 가능
  // 단지 기본으로 제공해주는 기능 이용하는 걸로
  
  // std::이 거슬리면 맨 위에 선언해서 쓸 수 있음
  // using namespace std;
  // 거의 꼭 들어간다고 보면 됨
  cout << "Hello, World!" << endl;
}