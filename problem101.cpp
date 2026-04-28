#include <iostream>
using namespace std;

class Shape {
public:
    int l,b,h;
};

class Rectangle : public Shape {
public:
    int area(){ return l*b; }
};

class Box : public Rectangle {
public:
    void volume(){ cout<<l*b*h; }
};

int main(){
    Box b;
    b.l=2; b.b=3; b.h=4;
    b.volume();
}