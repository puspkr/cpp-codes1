#include <iostream>
using namespace std;

class Account {
private:
    int balance = 2000;
public:
    int getBalance() { return balance; }
};

int main() {
    Account a;
    cout << a.getBalance();
}