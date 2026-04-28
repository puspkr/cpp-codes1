#include <iostream>
using namespace std;

class Teacher {
public:
    void teach(){ cout<<"Teach\n"; }
};

class Student {
public:
    void study(){ cout<<"Study\n"; }
};

class Result : public Teacher, public Student {
public:
    void show(){ cout<<"Result"; }
};

int main(){
    Result r;
    r.teach();
    r.study();
    r.show();
}