#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter the side : ";
    cin>>a;
    int b;
    cout<<"enter the side : ";
    cin>>b;
    int c;
    cout<<"enter the side : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"it is traiangle";
    }
    else{
        cout<<"it is not a triangle";
    } 
}