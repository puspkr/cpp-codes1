#include <iostream>
using namespace std;

class Student {
public:
    int marks1;
};

class Exam : public Student {
public:
    int marks2;
};

class Result : public Exam {
public:
    void show(){ cout<<marks1+marks2; }
};

int main(){
    Result r;
    r.marks1=40;
    r.marks2=50;
    r.show();
}