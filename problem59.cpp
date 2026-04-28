#include <iostream>
using namespace std;

class Demo {
public:
    Demo(int n){
        if(n%2==0) cout<<"Even";
        else cout<<"Odd";
    }
};

int main(){
    Demo d(7);
}