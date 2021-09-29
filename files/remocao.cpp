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

    } while ((t[i].status != 0) && (i < m));

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

    dado tabela[100]; //tabela para conter os dados

    int m = 0; // tamanho da tabela 
    int kRemove = 0; // chave para remover na tabela
    int key = 0; // variavel para auxiliar na insercao dosa dados
    int remove = 0; // verifica se removeu

    // capitura do tamanho do tabela
    cin >> m;

    // inicialização da tabela
    for (int i = 0; i < 100; i++) {
        tabela[i].k = -1;
        tabela[i].status = 0;

    }

    // capitura dos valores e sua insercao
    for (;;) {
        cin >> key;

        if (key == 0)
            break;

        remove = hash_insert(tabela, m, key);


    }

    // capiturar a chave para remoção
    cin >> kRemove;

    // remover a chave
    remove = hash_remove(tabela, m, kRemove);

    // mostrando a tabela
    if (remove == 0) {
        for (int i = 0; i < (m - 1); i++) {
            if (tabela[i].status != -1) {
                cout << tabela[i].k << " ";

            }

        } 

        if (tabela[m - 1].status != 2)
            cout << tabela[m - 1].k;
    
    } else {
        for (int i = 0; i < (m - 1); i++) {
            cout << tabela[i].k << " ";

        } 

        cout << tabela[m - 1].k;

    }

    cout << endl;
    

    return 0;

}
