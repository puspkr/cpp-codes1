#include <iostream>
using namespace std;

class Demo {
private:
    int x = 20;
public:
    void display() { cout << x; }
};

int main() {
    Demo d;
    d.display();
}