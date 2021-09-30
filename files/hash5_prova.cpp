#include <iostream>

using namespace std;

struct dado {
    int k; // chave
    int status; // ocupado = 1; valido = 0; removido = 2;
    
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

int hash_search(dado t[], int m, int k) {
    int i = 0; 
    int j = 0;

    do {

        j = hash1(k, i, m);

        if (t[j].k == k)
            return j;

        i += 1;

    } while ((t[j].status != 0) && (i < m));

    return -1;

}

int hash_remove(dado t[], int m, int k) {
    int j = 0;

    j = hash_search(t, m, k);

    if (j != -1) {
        t[j].k = -1;
        t[j].status = 2;

        return 0;

    }

    return -1;

}

int main() {

    dado table[1000]; // tabela hash

    int m = 0; // tamanho da tabela
    int key = 0; // variavel auxiliar para inserção das chaves e remoção das chaves
    int returnRemoveFunction = 0; // variavel para armazenar o retorno da funcao hash_remove

    // pegando o tamanho da tabela
    cin >> m;

    // resetando a tabela
    for (int i = 0; i < m; i++) {
        table[i].k = -1;
        table[i].status = 0;

    }

    // inserindo dados na tabela
    cin >> key;
    while (key != 0) {
        hash_insert(table, m, key);

        cin >> key;

    }

    // pegando a chave para remoção da mesma
    cin >> key;

    // removendo a chave e suas ocorrências
    while (true) {
        returnRemoveFunction = hash_remove(table, m, key);

        if (returnRemoveFunction == -1) 
            break;

    }

    // mostrando a tabela depois da remoção
    for (int i = 0; i < (m - 1); i++) 
        cout << table[i].k << " ";
    cout << table[m - 1].k;    

    return 0;

}