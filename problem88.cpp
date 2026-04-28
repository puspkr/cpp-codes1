#include <iostream>
using namespace std;

class A {
public:
    void show(){ cout<<"A"; }
};

class B : public A {};

int main(){
    B obj;
    obj.show();
}