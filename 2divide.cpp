#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the digit : ";
    cin>>x;
    if(x%5==0 || x%3==0){
        cout<<"divisible by 5 or 3";
    }
    else{
        cout<<"not divisible by 5 or 3";
    }
}