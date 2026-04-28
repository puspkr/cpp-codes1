#include <iostream>
using namespace std;

class Bank {
private:
    int balance;
public:
    void deposit(int x) { balance += x; }
    void show() { cout << balance; }
};

int main() {
    Bank b;
    b.deposit(1000);
    b.show();
}