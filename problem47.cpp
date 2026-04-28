#include <iostream>
using namespace std;

class Rectangle {
public:
    int l,b;
    Rectangle(int x,int y){ l=x; b=y; }
};

int main(){
    Rectangle r(2,3);
    cout<<r.l*r.b;
}