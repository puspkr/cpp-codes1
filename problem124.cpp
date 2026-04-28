#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a){ x=a; }

    Demo operator*(Demo d){
        return Demo(x * d.x);
    }
};

int main(){
    Demo d1(3), d2(4);
    Demo d3 = d1 * d2;
    cout << d3.x;
}