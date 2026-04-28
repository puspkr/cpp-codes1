#include <iostream>
using namespace std;

class Demo {
public:
    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Demo d;
}