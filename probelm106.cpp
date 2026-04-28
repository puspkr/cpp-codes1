#include <iostream>
using namespace std;

class A {
public:
    int x=10;
};

class B {
public:
    int y=20;
};

class C : public A, public B {
public:
    void sum(){ cout<<x+y; }
};

int main(){
    C c;
    c.sum();
}