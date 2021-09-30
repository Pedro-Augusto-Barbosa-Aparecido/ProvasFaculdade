#include <iostream>

using namespace std;

int mod (int x, int y) {
    if (x == y)
        return 0;

    if (x < y)
        return x;

    return mod((x - y), y);

}

int main() {

    int x = 0, y = 0; // valores para o calculo do mod

    // capitura dos dados e processamento
    cin >> x >> y;

    while (!(x == -1) && !(y == -1)) {
        // motrando o resultado do calculo
        cout << mod(x, y) << endl;

        // realizando uma nova capitura de dados
        cin >> x >> y;

    }
        

    return 0;

}