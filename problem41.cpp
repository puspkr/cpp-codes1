#include <iostream>
using namespace std;

class Product {
public:
    int price,qty;
};

int main(){
    Product p;
    cin>>p.price>>p.qty;
    cout<<p.price*p.qty;
}