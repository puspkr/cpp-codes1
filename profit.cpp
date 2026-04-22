#include<iostream>
using namespace std;
int main(){
    int cp;
    cout<<"engter the cost price : ";
    cin>>cp;
    int sp;
    cout<<"engter the selling price : ";
    cin>>sp;
    if(cp>sp){
        cout<<"you have made a loss of ";
         cout<<cp-sp;
    }
    else if(sp>cp){
        cout<<"you have made a profit of ";
        cout<<sp-cp;
    }
    else if(sp==cp){
        cout<<"you got no profit no loss";
    }
}