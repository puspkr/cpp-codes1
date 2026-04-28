#include <iostream>
using namespace std;

class Student {
public:
    int age;
    Student(int a){ age=a; }
};

int main(){
    Student s(18);
    cout<<s.age;
}