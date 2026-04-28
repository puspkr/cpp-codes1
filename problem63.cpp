#include <iostream>
using namespace std;

class Demo {
public:
    int *x;
    Demo(int a){
        x=new int;
        *x=a;
    }
    Demo(const Demo &d){
        x=new int;
        *x=*(d.x);
    }
};

int main(){
    Demo d1(10);
    Demo d2=d1;
    cout<<*d2.x;
}