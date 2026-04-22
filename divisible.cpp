#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the digit : ";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"divisible by both 5 and 3";
    }
    else{
        cout<<"not divisible by 5 and 3";
    }
}