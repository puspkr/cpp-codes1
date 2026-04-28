#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {};
class Teacher : public Person {};

int main(){
    Student s; Teacher t;
    s.name="A";
    t.name="B";
    cout<<s.name<<" "<<t.name;
}