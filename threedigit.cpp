#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the digit ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"three digit number";

    }
    else{
        cout<<"not a three digit number";
    }
}