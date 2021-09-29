#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// realiza o calculo do módulo de n
float moduleNumber(float n) {
    if (n >= 0)
        return n;
    else
        return (n * (-1));

}


// realiza o calculo 
// da nova estimativa da 
// raiz do numero 'x'
float makeOperation(float x, float x0) {
    return (pow(x0, 2) + x) / (2 * x0);

}

// realiza o calculo da raiz de forma recursiva
float raizQuadrada(float x, float x0, float e) {
    if (moduleNumber(pow(x0, 2) - x) <= e) 
        return x0;
    else
        return raizQuadrada(x, makeOperation(x, x0), e);

}

int main() {

    float x; // numero a ser tirado a raiz
    float x0; // estimativa inicial para a raiz
    float e; // limite superior para se houver erro no calculo

    // capiturando os valores
    cin >> x >> x0 >> e;

    // mostrando o valor da raiz
    cout << fixed << setprecision(2);
    cout << raizQuadrada(x, x0, e) << endl;

    return 0;

}
