#include <iostream>
using namespace std;

class Vehicle {
public:
    void speed(){ cout<<"Normal"; }
};

class Car : public Vehicle {
public:
    void speed(){ cout<<"Fast"; }
};

int main(){
    Car c;
    c.speed();
}