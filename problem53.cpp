#include <iostream>
using namespace std;

class Demo {
public:
    Demo(int a,int b){
        cout<<a+b;
    }
};

int main(){
    Demo d(5,6);
}