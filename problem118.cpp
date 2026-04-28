#include <iostream>
using namespace std;

class Demo {
public:
    int mul(int a,int b){ return a*b; }
    int mul(int a,int b,int c){ return a*b*c; }
};

int main(){
    Demo d;
    cout<<d.mul(2,3)<<"\n";
    cout<<d.mul(2,3,4);
}