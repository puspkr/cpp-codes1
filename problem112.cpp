#include <iostream>
using namespace std;

class Animal {
public:
    void sound(){ cout<<"Sound\n"; }
};

class Dog : public Animal {};
class Cat : public Animal {};

int main(){
    Dog d; Cat c;
    d.sound();
    c.sound();
}