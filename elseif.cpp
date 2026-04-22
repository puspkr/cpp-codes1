#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the age of ram";
    cin>>a;
    int b;
    cout<<"enter the age of shyam";
    cin>>b;
    int c;
    cout<<"enter the age of ajay : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<"is greatest";
        }
        else{
            cout<<c<<"is the greatest";
        }
    }
    else{
        if(b>c){
            cout<<c<<"is greatest ";
        }
        else{
            cout<<c<<"is greatest";
        }
    }
}