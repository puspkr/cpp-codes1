#include <iostream>
using namespace std;

class Circle {
public:
    float r;
    void input(){ cin>>r; }
    void area(){ cout<<3.14*r*r; }
};

int main(){
    Circle c;
    c.input();
    c.area();
}