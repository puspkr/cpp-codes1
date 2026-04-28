#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() { cout << "Destructor\n"; }
};

int main() {
    Demo d1, d2;
}