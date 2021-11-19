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

void prim(list<no>adj[], int nVertices, int start) {
    list<no>::iterator it;

    int parent[100], distance[100];
    int v = 0;

    int destino = 0, weight = 0; 
    int dist = INT_MAX;

    int custo = 0;

    bool inTree[100];

    for (int u = 0; u < nVertices; u++) {
        parent[u] = -1;
        distance[u] = INT_MAX;
        inTree[u] = false;

    }

    distance[start] = 0;
    v = start;

    while (inTree[v] == false) {
        inTree[v] = true;

        for (it = adj[v].begin(); it != adj[v].end(); it++) {
            destino = it->v;
            weight = it->peso;

            if ((distance[destino] > weight) && (inTree[destino] == false)) {
                distance[destino] = weight;
                parent[destino] = v;

            }

        }

        v = 0;
        dist = INT_MAX;

        for (int u = 0; u < nVertices; u++) {
            if ((inTree[u] == false) && (dist > distance[u])) {
                dist = distance[u];
                v = u;

            }

        }

    }

    for (int i = 0; i < nVertices; i++) {
        custo += distance[i];

        if (parent[i] != -1) 
            cout << parent[i] << " " << i << endl;

    }

    cout << "Custo: " << custo << endl;

}

void dijkstra(list<no>adj[], int nVertices, int start, int end) {
    list<no>::iterator it;
    list<int> melhorCaminho;

    int parent[100], distance[100];
    int v = 0;
    int pai = 0;

    int destino = 0, weight = 0; 
    int dist = INT_MAX;

    int custo = 0;

    bool inTree[100];

    for (int u = 0; u < nVertices; u++) {
        parent[u] = -1;
        distance[u] = INT_MAX;
        inTree[u] = false;

    }

    distance[start] = 0;
    v = start;

    while (inTree[v] == false) {
        inTree[v] = true;

        for (it = adj[v].begin(); it != adj[v].end(); it++) {
            destino = it->v;
            weight = it->peso;

            if ((distance[destino] > (distance[v] + weight))) {
                distance[destino] = distance[v] + weight;
                parent[destino] = v;

            }

        }

        v = 0;
        dist = INT_MAX;

        for (int u = 0; u < nVertices; u++) {
            if ((inTree[u] == false) && (dist > distance[u])) {
                dist = distance[u];
                v = u;

            }

        }

    }

    melhorCaminho.push_front(end);
    pai = parent[end];

    for (int i = 0; i < nVertices; i++) {
        melhorCaminho.push_front(pai);
        pai = parent[pai];

        if (pai == -1) {
            break;

        }

    }
    
    for (list<int>::iterator itp = melhorCaminho.begin(); itp != melhorCaminho.end(); itp++) {
        cout << *itp << " ";

    } cout << endl;

    cout << "Custo: " << distance[end] << endl;

}

int main () {

    list<no> grafo[10]; // grafo original

    int tam = 0; // numero de vertices do grafo
    int vInicial = 0; // vertice inicial
    int vFinal = 0; // vertice final

    int ord = 0; // 1 - orientado 0 - nao orientado
    int o = 0, v = 0, p = 0; // origem, destino e peso da aresta

    // capitutrando a qtd de vertices, ordem, vertice inicial
    cin >> tam >> ord >> vInicial >> vFinal;

    // capiturando arestas
    cin >> o >> v >> p;
    while ((o != -1) && (v != -1) && (p != -1)) {
        cria_aresta(grafo, o, v, p, ord);

        cin >> o >> v >> p;

    }

    cout << "Melhor caminho: ";
    dijkstra(grafo, tam, vInicial, vFinal);

    return 0;

}
