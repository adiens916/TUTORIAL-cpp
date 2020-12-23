/*
1. 아래의 GameWindow 클래스의 코드에서 
창 너비와 높이를 매개변수로 받는 ResizeWindow 함수를 추가하여
다음 조건과 같이 width와 height의 값을 바꿀 수 있도록 하세요.

- 들어온 매개변수의 값과 일치하도록 창 크기를 설정할 것
- 너비가 800보다 작거나 높이가 600보다 작을 때는 각각 800, 600으로 설정

2. GameWindow::GameWindow(int w, int h) 생성자도 마찬가지로
2번의 조건을 만족하도록 수정하세요.

3. 작성한 코드에서 상수화가 가능한 부분을 모두 상수화하세요.
*/

#include <iostream>

using namespace std;

class GameWindow {
public:
  GameWindow();
  GameWindow(const int, const int);

  int getWidth() const;
  int getHeight() const;

  void resizeWindow(const int, const int);

private:
  int width;
  int height;
};

GameWindow::GameWindow() : width(800), height(600) { }
GameWindow::GameWindow(const int w, const int h) {
  // Java처럼 생성자 내부에서도 다른 함수 호출 가능
  // 혹시 선언/정의를 분리했기에 밑의 함수를 쓸 수 있는 거임?
  // -> 아니, 내부에서 정의해도 잘 되는 걸 확인함.
  resizeWindow(w, h);

  /* if (w > 800) {
    width = w;
  }
  if (h > 600) {
    height = h;
  } */
}

int GameWindow::getWidth() const { return width; }
int GameWindow::getHeight() const { return height; }
void GameWindow::resizeWindow(const int w, const int h) {
    // 특수한 경우를 먼저 처리하는 쪽이 더 좋은가?
    if (w >= 800) {
      width = w;
    } else {
      width = 800;
    }

    if (h >= 600) {
      height = h;
    } else {
      height = 600;
    }
  }

int main() {
  GameWindow mainWindow;
  mainWindow.resizeWindow(1366, 768);
  cout << mainWindow.getWidth() << "x" << mainWindow.getHeight() << endl;

  GameWindow mainWindow2(500, 800);
  cout << mainWindow2.getWidth() << "x" << mainWindow2.getHeight() << endl;
}