#include <iostream>

using namespace std;

int comb(int n, int k) {
    if (k == 1)
        return n;
    
    if (k == n)
        return 1;

    return (comb(n - 1, k - 1) + comb(n - 1, k));

}

int main() {

    int n = 0, k = 0;
    
    // capitura dos valores
    cin >> n >> k;

    // calculando a probabilidade e mostrando o resultado
    cout << comb(n, k) << endl;

    return 0;

}
