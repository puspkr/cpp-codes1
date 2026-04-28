#include <iostream>
using namespace std;

class Complex {
public:
    int real,img;
};

int main(){
    Complex c;
    cin>>c.real>>c.img;
    cout<<c.real<<"+"<<c.img<<"i";
}