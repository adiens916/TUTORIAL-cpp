#include <iostream>

using namespace std;

class Account {
public:
  Account() : money(0) { }
  Account(int money) : money(money) { }

  void deposit(int amount) {
    money += amount;
    cout << amount << "원이 입금!" << endl;
  }

  void withdraw(int amount) {
    if (money > amount) {
      money -= amount;
      cout << amount << "원이 출금!" << endl;
    }
  }

  // 해결: 메서드에서 값 변경은 불가하고, 불러오기만 하게끔
  // 방법: 메서드 괄호 범위 바로 앞에 const 붙이기
  // = 상수형 메서드
  void checkBalance() const {
    money++;
    cout << "현재 잔액 : " << money << endl;
  }

private:
  int money;
};

int main() {
  Account doodle(300);
  doodle.checkBalance();
  doodle.deposit(100);
  doodle.withdraw(20);
  doodle.checkBalance();
}