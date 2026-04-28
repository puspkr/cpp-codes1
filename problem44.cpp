#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(){ x=10; }
};

int main(){
    Demo d;
    cout<<d.x;
}