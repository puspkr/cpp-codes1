#include <iostream>
using namespace std;

class Complex {
public:
    int r,i;
    Complex(int x,int y){ r=x;i=y; }
    Complex(const Complex &c){ r=c.r;i=c.i; }
};

int main(){
    Complex c1(1,2);
    Complex c2=c1;
    cout<<c2.r<<" "<<c2.i;
}