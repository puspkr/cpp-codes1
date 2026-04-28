#include <iostream>
using namespace std;

class Test {
public:
    Test(){ cout<<"Constructor called"; }
};

int main(){
    Test t;
}