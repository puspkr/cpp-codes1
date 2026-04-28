#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base(){ cout<<"Base destroyed\n"; }
};

class Derived : public Base {
public:
    ~Derived(){ cout<<"Derived destroyed"; }
};

int main(){
    Base *b = new Derived();
    delete b;
}