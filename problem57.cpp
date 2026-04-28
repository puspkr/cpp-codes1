#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(){
        cin>>x;
    }
};

int main(){
    Demo d;
    cout<<d.x;
}