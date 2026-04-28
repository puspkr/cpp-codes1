#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};

int main() {
    Student s1;
    s1.name = "Aditya";
    s1.age = 18;
    s1.display();
}