#include <iostream>
using namespace std;

class Login {
private:
    int pass = 1234;
public:
    void check(int p) {
        if(p == pass) cout << "Access";
        else cout << "Denied";
    }
};

int main() {
    Login l;
    l.check(1234);
}