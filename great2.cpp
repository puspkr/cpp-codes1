#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the no : ";
    cin>>a;
    int b;
    cout<<"enter the no : ";
    cin>>b;
    int c;
    cout<<"enter the no : ";
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