#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("test.txt");
    file << "Hello World";
    file.close();

    ifstream in("test.txt");
    string data;
    in >> data;
    cout << data;
}