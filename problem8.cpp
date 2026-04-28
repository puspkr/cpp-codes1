#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A" << endl;
    }
};

class B : public A {
};

class C : public B {
};

int main() {
    C obj;
    obj.showA();
}