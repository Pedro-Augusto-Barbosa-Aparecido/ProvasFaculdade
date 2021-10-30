#include <iostream>
#include <list>

using namespace std;

struct No {
    int v; // vertice de destino
    int peso; // peso da aresta

};

int main() {

    list<No> adj[10]; // lista de adjacencia
    list<No>::iterator it; // iterador da lista adj

    int nVertices = 4; // numero de vertices
    int o = 0, v = 0; // origem e destino de uma aresta
    int p = 0; // peso da aresta
    
    int orientado = 0; // 1 - orientado | 0 - não orientado

    No aux; // variavel auxiliar para inserir arestas em adj

    // inserindo arestas em adj
    for (int i = 0; i < 4; i++) {
        cin >> o >> v >> p;
        
        aux.v = v;
        aux.peso = p;

        adj[o].push_back(aux);
        
        if (orientado == 0) {
            aux.v = o;

            adj[i].push_back(aux);

        }

    }
    
    // mostrando grafo
    cout << "Lista ADJ: " << endl;
    for (int i = 0; i < nVertices; i++) {
        for (it = adj[i].begin(); it != adj[i].end(); it++) {
            cout << i << " " << it->v << " " << it->peso << endl; 

        }

    }
    

    return 0;

}
