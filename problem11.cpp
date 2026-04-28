#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Demo d;
    cout << d.add(2, 3) << endl;
    cout << d.add(1, 2, 3);
}