#include <iostream>

using namespace std;

int hash_aux(int k, int m) {
    if ((k % m) >= 0) 
        return (k % m);

    return (k % m) + m;

}

int main() {

    int k = 0; // chave
    int m = 0; // tamanho da tabela hash
    int hashing = 0; // armazena o resultado do hash

    // loop até k = 0 m = 0
    while (true) {
        // capitura de dados
        cin >> k >> m;

        // verficar ponto de parada
        if ((k == 0) && (m == 0))
            break;

        // hashing
        hashing = hash_aux(k, m);

        // mostrando resultado do hashing
        cout << hashing << endl;

    }

    return 0;

}
