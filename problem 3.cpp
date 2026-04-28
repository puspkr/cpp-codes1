#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }

    void display() {
        cout << x;
    }
};

int main() {
    Demo d(20);
    d.display();
}