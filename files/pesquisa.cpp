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

int main() {

    dado tabela[100]; //tabela para conter os dados

    int m = 0; // tamanho da tabela 
    int kSearch = 0; // chave para procurar na tabela
    int key = 0; // variavel para auxiliar na insercao dosa dados
    int pos = 0; // posição do elemento

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

        pos = hash_insert(tabela, m, key);


    }

    // capitura do elemento a ser buscado
    cin >> kSearch;

    // buscando elemento
    pos = hash_search(tabela, m, kSearch);

    // mostrando resposta
    cout << "Chave " << kSearch;

    if (pos != -1)
        cout << " encontrada na posicao " << pos << endl;

    else
        cout << " nao encontrada" << endl; 

    return 0;

}
