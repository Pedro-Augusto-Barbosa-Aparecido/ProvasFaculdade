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

// Implementa um percurso em largura em um grafo
void bfs(list<no>adj[], int nVertices, int s) {
    int qtdVerVisit = 0; // quantidade de vertices visitados
    char state[10];
    int p[10];
    list<int> Q;
    int i;
    int u,v; // vars aux para mostrar os vértices
    list<no>::iterator q; // iterador para varrer a lista de adjacências
    
    for(i=0;i<nVertices;i++)
    {
        state[i] = 'u';
        p[i] = -1;
    }    
    state[s] = 'd';
    p[s] = -1;
    Q.push_back(s);
    while(!Q.empty())
    {
        u = *Q.begin();
        Q.pop_front();
        // cout << u << endl;
        for(q=adj[u].begin();q!=adj[u].end();q++)
        {
            v = q->v;
            // cout << u << " " << v << endl;
            if(state[v]=='u')
            {
                state[v] = 'd';
                p[v] = u;
                Q.push_back(v);
            }
        }
        state[u] = 'p';
        qtdVerVisit++;
    }

    if (qtdVerVisit == nVertices) 
        cout << "Conexo" << endl;
    else
        cout << "Nao conexo" << endl;


}

int main () {

    list<no> grafo[10]; // grafo original

    int tam = 0; // numero de vertices do grafo
    int vStart = 0; // vertice inicial

    int o = 0, v = 0; // origem, destino e peso da aresta

    // capitutrando a qtd de vertices, ordem, vertice inicial
    cin >> tam >> vStart;

    // capiturando arestas
    cin >> o >> v;
    while ((o != -1) && (v != -1)) {
        cria_aresta(grafo, o, v, 1, 0);

        cin >> o >> v;

    }

    bfs(grafo, tam, vStart);

    return 0;

}
