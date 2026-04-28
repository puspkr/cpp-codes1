#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Job {
public:
    int salary;
};

class Employee : public Person, public Job {
public:
    void show(){ cout<<name<<" "<<salary; }
};

int main(){
    Employee e;
    e.name="Ram";
    e.salary=10000;
    e.show();
}