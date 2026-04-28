#include <iostream>
using namespace std;

class Area {
public:
    int calc(int a){ return a*a; }
    int calc(int l,int b){ return l*b; }
};

int main(){
    Area a;
    cout<<a.calc(4)<<"\n";
    cout<<a.calc(2,3);
}