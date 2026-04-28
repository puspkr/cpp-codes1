#include <iostream>
using namespace std;

class Demo {
public:
    string s;
    Demo(string x){ s=x; }
    Demo(const Demo &d){ s=d.s; }
};

int main(){
    Demo d1("Hello");
    Demo d2=d1;
    cout<<d2.s;
}