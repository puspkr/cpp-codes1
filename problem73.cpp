#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() { cout << "Destroyed\n"; }
};

int main() {
    {
        Demo d;
    }
    cout << "Out of block";
}