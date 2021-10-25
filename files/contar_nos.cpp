#include <iostream>
#include <list>

using namespace std;

int contar(list<int> lista) {
    int numEl = 0;

    for (list<int>::iterator i = lista.begin(); i != lista.end(); i++) 
        numEl++;

    return numEl;

}

int main() {

    list<int> vet; // lista para os valoores

    int aux = 0; // variavel para auxiliar na capitura de dados

    // capitura dos valores
    cin >> aux;

    while (aux != 0) {
        vet.push_back(aux);

        cin >> aux;

    }

    // contando o numero de elementos da lista e mostrando resultado
    cout << contar(vet) << endl;

    return 0;

}
 