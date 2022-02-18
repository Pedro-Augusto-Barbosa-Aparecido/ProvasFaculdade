#include <iostream>

using namespace std;

int sinal (int n) {
    if (n == 0)
        return 0;

    if (n > 0)
        return 1;
    return -1;

}

int main () {
    int n = 0;

    cin >> n;

    int sign = sinal(n);

    sign == 0 ? cout << "Zero\n" : sign == -1 ? cout << "Negativo\n" : cout << "Postivo\n";

    return 0;

}
