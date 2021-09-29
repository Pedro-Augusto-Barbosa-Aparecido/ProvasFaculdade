#include <iostream>

using namespace std;

struct dado {
    int k; // chave
    int status; // ocupado = 1; valido = 0;
    
};

int hash_aux(int k, int m) {
    if ((k % m) >= 0) 
        return (k % m);

    return (k % m) + m;

}

int hash1(int k, int i, int m) {
    return ((hash_aux(k, m) + i) % m);

}

int hash_insert(dado t[], int m, int k) {
    int i = 0;
    int j = 0;

    do {
        j = hash1(k, i, m);

        if (t[j].status == 0) {
            t[j].status = 1;
            t[j].k = k;

            return j;

        }

        i += 1;


    } while (i != m);

    return -1;

}

int main() {

    dado list[999]; // tabela hash

    int m = 0; // tamanho da tabela
    int chave = 0; // variavel para auxiliar na inserção das chaves
    int pos = 0; // posicao inserida

    // capitura do tamanho da tabela
    cin >> m;

    // inicializando a tabela
    for (int i = 0; i < m; i++) {
        list[i].status = 0;
        list[i].k = -1;

    }
    
    // inserindo os dados
    cin >> chave;

    while (chave != 0)
    {
        pos = hash_insert(list, m, chave);
        cin >> chave;

    }

    // mostrando a tabela alocada
    for (int i = 0; i < (m - 1); i++)
        cout << list[i].k << " ";
    cout << list[m - 1].k << endl;

    return 0;

}
