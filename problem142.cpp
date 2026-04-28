#include <iostream>
using namespace std;

class Base {
public:
    virtual void f1(){ cout<<"F1\n"; }
    virtual void f2(){ cout<<"F2"; }
};

class Derived : public Base {
public:
    void f1(){ cout<<"DF1\n"; }
    void f2(){ cout<<"DF2"; }
};

int main(){
    Base *b;
    Derived d;
    b=&d;
    b->f1();
    b->f2();
}