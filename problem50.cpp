#include <iostream>
using namespace std;

class Demo {
public:
    Demo(){ cout<<"No arg\n"; }
    Demo(int a){ cout<<"One arg\n"; }
    Demo(int a,int b){ cout<<"Two arg"; }
};

int main(){
    Demo d1,d2(5),d3(2,3);
}