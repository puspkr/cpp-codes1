#include <iostream>
using namespace std;

class Vehicle {
public:
    void start(){ cout<<"Start"; }
};

class Car : public Vehicle {};

int main(){
    Car c;
    c.start();
}