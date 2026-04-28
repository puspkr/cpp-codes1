#include <iostream>
using namespace std;

class Demo {
public:
    int arr[3];
    Demo(){
        for(int i=0;i<3;i++) cin>>arr[i];
    }
    Demo(const Demo &d){
        for(int i=0;i<3;i++) arr[i]=d.arr[i];
    }
};

int main(){
    Demo d1;
    Demo d2=d1;
    for(int i=0;i<3;i++) cout<<d2.arr[i]<<" ";
}