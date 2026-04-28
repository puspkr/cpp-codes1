#include <iostream>
using namespace std;

class Demo {
public:
    Demo(){ cout<<"Default\n"; }
    Demo(const Demo &d){ cout<<"Copy\n"; }
};

int main(){
    Demo d1;
    Demo d2=d1;
}