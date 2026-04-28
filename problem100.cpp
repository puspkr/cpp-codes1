#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Employee : public Person {
public:
    int salary;
};

class Manager : public Employee {
public:
    void show(){
        cout<<name<<" "<<salary;
    }
};

int main(){
    Manager m;
    m.name="Aman";
    m.salary=5000;
    m.show();
}