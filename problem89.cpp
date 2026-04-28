#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

class Result : public Student {
public:
    void show(){ cout<<marks; }
};

int main(){
    Result r;
    r.marks = 90;
    r.show();
}