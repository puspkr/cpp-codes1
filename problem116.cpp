#include <iostream>
using namespace std;

class Demo {
public:
    int add(int a,int b){ return a+b; }
};

int main(){
    Demo d;
    cout<<d.add(2,3);
}