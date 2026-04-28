#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    void input() { cin >> brand >> price; }
    void show() { cout << brand << " " << price; }
};

int main() {
    Car c;
    c.input();
    c.show();
}