#include <iostream>
using namespace std;

class Employee {
public:
    int salary;
};

int main() {
    Employee e;
    cin >> e.salary;
    cout << e.salary;
}