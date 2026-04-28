#include <iostream>
using namespace std;

class Student {
public:
    int age;
};

int main() {
    Student s[3];
    int sum=0;
    for(int i=0;i<3;i++) { cin >> s[i].age; sum+=s[i].age; }
    cout << sum/3;
}