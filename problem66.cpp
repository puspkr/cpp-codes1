#include <iostream>
using namespace std;

class Rect {
public:
    int l,b;
    Rect(int x,int y){ l=x;b=y; }
    Rect(const Rect &r){ l=r.l;b=r.b; }
};

int main(){
    Rect r1(2,3);
    Rect r2=r1;
    cout<<r2.l*r2.b;
}