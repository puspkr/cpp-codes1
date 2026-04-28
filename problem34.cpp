#include <iostream>
using namespace std;

class Book {
public:
    string title,author;
};

int main(){
    Book b;
    cin>>b.title>>b.author;
    cout<<b.title<<" "<<b.author;
}