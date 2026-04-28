#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor Called" << endl;
    }
};

int main() {
    Demo d;
}