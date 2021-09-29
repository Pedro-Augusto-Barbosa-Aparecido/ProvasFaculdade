#include <iostream>

using namespace std;

// realiza o calculo da potenmcia de forma recursiva
int potencia(int a, int n) {

    if (n == 0)
        return 1;

    else
        return a * potencia(a, n - 1);

}

int main() {

    int a; // numero a ser elevado pela potencia
    int n; // numero que indica a potencia

    // pegar o numero e o valor da potencia
    cin >> a >> n;

    // mostrar o resultado
    cout << potencia(a, n) << endl;

    return 0;

}
