#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a){ x=a; }

    void compare(Demo d){
        if(x > d.x) cout<<"Greater";
        else cout<<"Smaller";
    }
};

int main(){
    Demo d1(10), d2(7);
    d1.compare(d2);
}