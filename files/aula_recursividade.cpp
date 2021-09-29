#include <iostream>

using namespace std;

int fatorial(int n) {

    if (n == 0)
        return 1;
    else 
        return n * fatorial(n - 1);

}

int fibonacci(int n) {
    if ((n == 0) || (n == 1))
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
    
}

int main() {

    int num;

    cin >> num;

    cout << fatorial(num) << endl;
    cout << fibonacci(num) << endl;

    return 0;

}
