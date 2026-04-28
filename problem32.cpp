#include <iostream>
using namespace std;

class Rectangle {
public:
    int l,b;
    void input(){ cin>>l>>b; }
    void area(){ cout<<l*b; }
};

int main(){
    Rectangle r;
    r.input();
    r.area();
}