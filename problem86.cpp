#include <iostream>
using namespace std;

class Demo {
private:
    int x;
public:
    void set(int a){ x=a; }
    void update(int b){ x+=b; }
    void show(){ cout<<x; }
};

int main(){
    Demo d;
    d.set(10);
    d.update(5);
    d.show();
}