
#include <iostream>
using namespace std;

class Shape {
public:
    void area(){ cout<<"Shape"; }
};

class Circle : public Shape {
public:
    void area(){ cout<<"Circle Area"; }
};

int main(){
    Circle c;
    c.area();
}