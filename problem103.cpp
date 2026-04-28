#include <iostream>
using namespace std;

class A {
public:
    void showA(){ cout<<"A\n"; }
};

class B {
public:
    void showB(){ cout<<"B"; }
};

class C : public A, public B {};

int main(){
    C c;
    c.showA();
    c.showB();
}