#include <iostream>
using namespace std;

class Animal {
public:
    void sound(){ cout<<"Animal"; }
};

class Dog : public Animal {
public:
    void sound(){ cout<<"Bark"; }
};

int main(){
    Dog d;
    d.sound();
}