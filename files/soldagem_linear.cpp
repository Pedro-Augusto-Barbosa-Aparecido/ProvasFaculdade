#include <iostream>

using namespace std;

int hash_aux(int k, int m) {
    if ((k % m) >= 0) 
        return (k % m);

    return (k % m) + m;

}

int hash1(int k, int i, int m) {
    return ((hash_aux(k, m) + i) % m);

}

int main() {

    int k = 0; // chave
    int m = 0; // tamanho da tabela hash
    int i = 0; // numero de tentativas
    int hashing = 0; // armazena o resultado do hash

    // capitura da chave e tamanho da tabela
    cin >> k >> m;

    // hashing e mostragem do resultado
    for (i = 0; i < (m - 1); i++)
        cout << hash1(k, i, m) << " ";

    cout << hash1(k, (m - 1), m) << endl;

    return 0;

}
