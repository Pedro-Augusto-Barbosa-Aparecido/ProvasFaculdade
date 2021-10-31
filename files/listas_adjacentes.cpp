#include <iostream>
#include <list>

using namespace std;

struct no {
    int v; // vertice adjacente
    int peso; // peso da aresta

};

void cria_aresta(list<no>adj[], int u, int v, int p, int orientado) {
    no aux;

    aux.peso = p;
    aux.v = v;

    if (orientado == 1) {
        adj[u].push_back(aux);

    } else {
        int o = aux.v;
        
        adj[u].push_back(aux);

        aux.v = u;

        adj[o].push_back(aux);

    }

}

int main () {
    list<no> grafo[100];

    int tam = 0; // numero de vertices do grafo
    int ord = 0; // 1 - orientado | 0 - não orientado

    int o = 0, v = 0, p = 0; // origem, destino e peso da aresta

    // pegando o numero de vertices e ordem
    cin >> tam >> ord;


    // inserindo vertices no grafo
    for (;;) {
        cin >> o >> v >> p;

        if ((o == -1) && (v == -1) && (p == -1)) {
            break;

        }

        cria_aresta(grafo, o, v, p, ord);

    }

    // mostrando grafo
    for (int i = 0; i < tam; i++) {
        for (list<no>::iterator it = grafo[i].begin(); it != grafo[i].end(); it++) {
            cout << i << " " << it->v << " " << it->peso << endl;

        }

    }

    return 0;

}
