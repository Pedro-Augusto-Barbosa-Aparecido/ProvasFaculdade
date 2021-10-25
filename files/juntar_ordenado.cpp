#include <iostream>
#include <list>

using namespace std;

bool findElement (list<int> vet, int& value) {
    for (list<int>::iterator it = vet.begin(); it != vet.end(); it++)
        if (*it == value) 
            return true;

    return false;

}

int main() {

    list<int> vet1; // variavel para a lista
    list<int> vet2; // variavel para a lista
    list<int> vet3; // variavel para a lista

    list<int>::iterator it; // variavel para percorrer as listas

    int aux = 0; // variavel auxiliar para a leitura dos elementos da lista
    int numBef = 0; // variavel auxiliar para transferencia de elementos para lista 3

    // capitura dos elementos
    cin >> aux;

    while (aux != 0) {
        vet1.push_back(aux);

        cin >> aux;

    }

    cin >> aux;

    while (aux != 0) {
        vet2.push_back(aux);

        cin >> aux;

    }

    // passando os valores para o vetor 3
    for (it = vet1.begin(); it != vet1.end(); it++) {
        if (!findElement(vet3, *it)) {
            vet3.push_back(*it);

        }
    
    }

    for (it = vet2.begin(); it != vet2.end(); it++) {
        if (!findElement(vet3, *it)) {
            vet3.push_back(*it);

        }

    }

    // ordenando os valores
    vet3.sort();

    // mostrando o vetor 3
    for (it = vet3.begin(); it != vet3.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
    
}
