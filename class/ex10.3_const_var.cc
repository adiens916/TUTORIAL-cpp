#include <iostream>

using namespace std;

class Account {
public:
  Account() : money(0) { }
  Account(int money) : money(money) { }

  void deposit(const int amount) {
    amount = money;
    cout << amount << "원이 입금!" << endl;
  }

  void withdraw(int amount) {
    if (money > amount) {
      money -= amount;
      cout << amount << "원이 출금!" << endl;
    }
  }

  void checkBalance() const {
    // money++;
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