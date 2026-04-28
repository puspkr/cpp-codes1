#include <iostream>
using namespace std;

class Bank {
public:
    int balance=0;
    void deposit(int x){ balance+=x; }
};

int main(){
    Bank b;
    int x; cin>>x;
    b.deposit(x);
    cout<<b.balance;
}