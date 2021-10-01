#include <iostream>

using namespace std;

int main() {

    int a;
    int *b;

    a = 0;
    b = &a;

    cout << "&a: " << &a << endl;
    cout << "b.: " << b << endl;
    cout << "*b: " << *b << endl; 

    return 0;

}
