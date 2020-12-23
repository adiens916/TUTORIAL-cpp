#include <iostream>

using namespace std;

class Account {
public:
  Account() : money(0) { }
  Account(int money) : money(money) { }

  // 상황 2: 입금할 때마다 2배씩 입금하게 했음
  void deposit(int amount) {
    money += amount * 2;
    cout << amount << "원이 입금!" << endl;
  }

  void withdraw(int amount) {
    if (money > amount) {
      money -= amount;
      cout << amount << "원이 출금!" << endl;
    }
  }

  // 상황 1: 잔액 조회할 때마다, 실수로 money가 1씩 증가하게끔 함
  void checkBalance() {
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