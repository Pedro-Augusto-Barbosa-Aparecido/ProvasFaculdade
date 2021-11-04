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

void bfs(list<no>adj[], int nVertices, int s) {
    int state[10], p[10];
    int u = 0, v = 0;

    list<no>::iterator it;
    list<int> Q;

    for (int i = 0; i < 10; i++) {
        state[i] = -1;
        p[i] = -1;

    }

    state[s] = 0;

    Q.push_back(s);

    while (!Q.empty()) {
        u = Q.front();
        Q.pop_front();

        cout << u << endl;

        for (it = adj[u].begin(); it != adj[u].end(); it++) {
            v = it->v;

            cout << u << " " << v << endl;
            if (state[v] == -1) {
                state[v] = 0;
                p[v] = u;

                Q.push_back(v);

            }

        }

        state[v] = 1;

    }

}

int main () {
    list<no> grafo[100];

    int tam = 0; // numero de vertices do grafo
    int vInicial = 0; // vertice inicial

    int o = 0, v = 0, p = 0; // origem, destino e peso da aresta

    // pegando o numero de vertices e ordem
    cin >> tam >> vInicial;


    // inserindo vertices no grafo
    for (;;) {
        cin >> o >> v >> p;

        if ((o == -1) && (v == -1) && (p == -1)) {
            break;

        }

        cria_aresta(grafo, o, v, p, 0);

    }

    bfs(grafo, tam, vInicial);

    return 0;

}
