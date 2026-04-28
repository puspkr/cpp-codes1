#include <iostream>
using namespace std;

class Demo {
public:
    int arr[3];
    Demo(){
        for(int i=0;i<3;i++) cin>>arr[i];
    }
};

int main(){
    Demo d;
    for(int i=0;i<3;i++) cout<<d.arr[i]<<" ";
}