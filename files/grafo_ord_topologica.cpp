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
    int dist = 2147483647;

    int custo = 0;

    bool inTree[100];

    for (int u = 0; u < nVertices; u++) {
        parent[u] = -1;
        distance[u] = 2147483647;
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
        dist = 2147483647;

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
    int dist = 2147483647;

    int custo = 0;

    bool inTree[100];

    for (int u = 0; u < nVertices; u++) {
        parent[u] = -1;
        distance[u] = 2147483647;
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
        dist = 2147483647;

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

bool notIndexInOrder(int order[], int limit, int index) {
    for (int i = 0; i < limit; i++) {
        if (order[i] == index) {
            return true;

        }

    }

    return false;

}

void ordenacao_topologica(int f[], int nVertices) {
    int ordem[100];
    int maior = -1;
    int index = 0;
    
    for (int i = 0; i < nVertices; i++) {
        ordem[i] = -1;
        
    }


    for (int i = 0; i < nVertices; i++) {
        for (int p = 0; p < nVertices; p++) {
            if ((maior < f[p]) && !notIndexInOrder(ordem, nVertices, p)) {
                maior = f[p];
                index = p;

            }

        }

        maior = -1;
        ordem[i] = index;

    }

    for (int i = 0; i < nVertices; i++)
        cout << ordem[i] << " ";
    cout << endl;

}

void dfsVisit (int u, int color[], int pi[], int d[], int f[], int &time, list<no> adj[]) {
    color[u] = 2;
    time += 1;
    d[u] = time;

    for (list<no>::iterator it = adj[u].begin(); it != adj[u].end(); it++) {
        if (color[it->v] == 1) {
            pi[it->v] = u;
            dfsVisit(it->v, color, pi, d, f, time, adj);

        }

    }

    color[u] = 3;
    f[u] = time = time + 1;


}

void dfs(list<no>adj[], int nVertices) {
    // color 1 - white | 2 - gray | 3 - black | -1 - nil
    int color[100], pi[100], d[100], f[100]; 
    int time = 0;

    int v = 0;

    list<no>::iterator it;

    for (int i = 0; i < nVertices; i++) {
        color[i] = 1;
        pi[i] = -1;

    }

    time = 0;

    for (int u = 0; u < nVertices; u++) {
        if (color[u] == 1) {
            dfsVisit(u, color, pi, d, f, time, adj);

        }

    }

    ordenacao_topologica(f, nVertices);

}

int main () {

    list<no> grafo[10]; // grafo original

    int tam = 0; // numero de vertices do grafo

    int ord = 0; // 1 - orientado 0 - nao orientado
    int o = 0, v = 0; // origem, destino e peso da aresta

    // capitutrando a qtd de vertices, ordem, vertice inicial
    cin >> tam >> ord;

    // capiturando arestas
    cin >> o >> v;
    while ((o != -1) && (v != -1)) {
        cria_aresta(grafo, o, v, 0, ord);

        cin >> o >> v;

    }

    dfs(grafo, tam);

    return 0;

}
