#include <iostream>
using namespace std;

class A {
public:
    void funA() {
        cout << "A" << endl;
    }
};

class B {
public:
    void funB() {
        cout << "B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.funA();
    obj.funB();
}