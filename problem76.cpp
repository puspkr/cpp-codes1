#include <iostream>
using namespace std;

class Demo {
public:
    int *p;
    Demo() {
        p = new int;
        *p = 10;
    }
    ~Demo() {
        delete p;
        cout << "Memory freed";
    }
};

int main() {
    Demo d;
}