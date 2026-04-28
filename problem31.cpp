#include <iostream>
using namespace std;

class Add {
public:
    int a,b;
    void input() { cin >> a >> b; }
    void sum() { cout << a+b; }
};

int main() {
    Add x;
    x.input();
    x.sum();
}