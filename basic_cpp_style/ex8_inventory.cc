#include <iostream>

using namespace std;

int inventory[64] = {0};
int score_ = 0;

void getItem(int itemId) {
  inventory[itemId]++;
}

void getItem(int itemId, int count) {
  inventory[itemId] += count;
}

void getItem(int itemId, int count, int score) {
  inventory[itemId] += count;
  score_ += score;
}


int main() {
  getItem(6, 5);
  getItem(3, 2);
  getItem(3);
  getItem(11, 34, 7000);

  for (int i = 0; i < 16; i++) {
    cout << inventory[i] << ' ';
  }
}
