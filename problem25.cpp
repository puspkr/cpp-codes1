#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void input() { cin >> name >> age; }
    void show() { cout << name << " " << age << endl; }
};

int main() {
    Student s[5];
    for(int i=0;i<5;i++) s[i].input();
    for(int i=0;i<5;i++) s[i].show();
}