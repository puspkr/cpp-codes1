#include <iostream>
using namespace std;

class Demo {
public:
    string name;
    Demo(string n){ name=n; }
};

int main(){
    Demo d("Aditya");
    cout<<d.name;
}