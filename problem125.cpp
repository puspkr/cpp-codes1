#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a){ x=a; }

    bool operator==(Demo d){
        return x == d.x;
    }
};

int main(){
    Demo d1(5), d2(5);
    if(d1 == d2) cout<<"Equal";
}