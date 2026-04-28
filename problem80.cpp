#include <iostream>
using namespace std;

class Student {
private:
    int marks;
public:
    void setMarks(int m) { marks = m; }
    void show() { cout << marks; }
};

int main() {
    Student s;
    s.setMarks(90);
    s.show();
}