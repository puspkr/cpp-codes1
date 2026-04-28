#include <iostream>
using namespace std;

class Vehicle {
public:
    void start(){ cout<<"Start\n"; }
};

class Car : public Vehicle {};
class Bike : public Vehicle {};

int main(){
    Car c;
    Bike b;
    c.start();
    b.start();
}