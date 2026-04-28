#include <iostream>
using namespace std;

class Shape {
public:
    int l,b;
};

class Area : public Shape {
public:
    void calc(){ cout<<l*b; }
};

int main(){
    Area a;
    a.l=2; a.b=3;
    a.calc();
}