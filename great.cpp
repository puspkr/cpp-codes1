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
    if(a>b && a>c){
        cout<<"a is greatest";
    }
    else if(b>a && b>c){
        cout<<"b is greatest";
    }
    else{
        cout<<"c is greatest";
    }
}