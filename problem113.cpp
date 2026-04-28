#include <iostream>
using namespace std;

class Shape {
public:
    int r,a;
};

class Circle : public Shape {
public:
    void area(){ cout<<3.14*r*r<<"\n"; }
};

class Square : public Shape {
public:
    void area(){ cout<<a*a; }
};

int main(){
    Circle c; c.r=3;
    Square s; s.a=4;
    c.area();
    s.area();
}