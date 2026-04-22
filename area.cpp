#include<iostream>
using namespace std;
int main(){
    int l = 8;
    int b = 7;
    int a = l*b;
    int p = 2*(l+b);
    if (a>p){
        cout<<"area is greater than its perimeter";
    }
    else {
        cout<<"perimeter is greater";
    }
}