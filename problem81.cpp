#include <iostream>
using namespace std;

class Emp {
private:
    int salary;
public:
    void setSalary(int s) {
        if(s > 0) salary = s;
    }
    void show() { cout << salary; }
};

int main() {
    Emp e;
    e.setSalary(5000);
    e.show();
}