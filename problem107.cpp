#include <iostream>
using namespace std;

class Add {
public:
    int add(int a,int b){ return a+b; }
};

class Mul {
public:
    int mul(int a,int b){ return a*b; }
};

class Calc : public Add, public Mul {};

int main(){
    Calc c;
    cout<<c.add(2,3)<<"\n"<<c.mul(2,3);
}