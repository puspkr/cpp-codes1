#include <iostream>
using namespace std;

class Time {
public:
    int h,m,s;
};

int main(){
    Time t;
    cin>>t.h>>t.m>>t.s;
    cout<<t.h<<":"<<t.m<<":"<<t.s;
}