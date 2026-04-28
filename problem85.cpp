#include <iostream>
using namespace std;

class Demo {
private:
    int x;
public:
    void set(int a){ x=a; }
    void show(){ cout<<x; }
};

int main(){
    Demo d;
    int n; cin>>n;
    d.set(n);
    d.show();
}