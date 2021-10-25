#include <iostream>
#include <list>

using namespace std;

bool encontrar(list<int> lista, float x) {
    for (list<int>::iterator p = lista.begin(); p != lista.end(); p++)
        if (*p == x)
            return true;

    return false;

}

int main () {

    list <int> vet; // variavel para armazenar a pilha
    list <int>::iterator p; // ponteiro para iterar na pilha

    int in = -1; // variavel auxiliar para entrada de dados
    float searchElement = 0.0; // item a ser procurado

    // capitura de dados e inserindo items na pilha
    cin >> in;

    while (in != 0) {
        vet.push_back(in);
        cin >> in;

    }

    // lendo o elemento a ser encontrado
    cin >> searchElement;

    // buscando elemento na lista e mostrando a saida
    encontrar(vet, searchElement) ? cout << "Encontrado\n" : cout << "Nao encontrado\n";

    return 0;

}
