#include <iostream>
using namespace std;

class Device {
public:
    void on(){ cout<<"On\n"; }
};

class Computer : public Device {};

class Laptop : public Computer {
public:
    void work(){ cout<<"Working"; }
};

int main(){
    Laptop l;
    l.on();
    l.work();
}