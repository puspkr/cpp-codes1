#include <iostream>
using namespace std;

class Demo {
public:
    int a;
    Demo(int x){ a=x; }
    Demo(const Demo &d){ a=d.a; }
};

int main(){
    Demo d1(5);
    Demo d2(d1);
    cout<<d2.a;
}