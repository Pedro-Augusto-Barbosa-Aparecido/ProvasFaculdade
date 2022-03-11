#include <iostream>

using namespace std;

int pot(int a, int n) {
    if (n == 0)
        return 1;

    return a * pot(a, (n - 1));

}

int main() {
    int base = 0, expo = 0;

    cin >> base >> expo;

    int res = pot(base, expo);

    cout << res;

    return 0;

}
