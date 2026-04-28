#include <iostream>
using namespace std;

class Emp {
public:
    int salary;
};

class Manager : public Emp {
public:
    void show(){ cout<<salary; }
};

int main(){
    Manager m;
    m.salary=10000;
    m.show();
}