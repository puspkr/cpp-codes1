#include <iostream>
using namespace std;

class Emp {
public:
    void salary(){ cout<<"Base Salary"; }
};

class Manager : public Emp {
public:
    void salary(){ cout<<"Manager Salary"; }
};

int main(){
    Manager m;
    m.salary();
}