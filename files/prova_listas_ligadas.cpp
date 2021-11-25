#include <iostream>
#include <list>

using namespace std;

int main () {

    list<int> lista; // lista ligada

    int aux = 0; // variavel auxiliar para inserção de dados na lista

    // capiturando os valores
    cin >> aux;

    while (aux != 0) {
        lista.push_front(aux);
        cin >> aux;

    }

    // mostrando em ordem inversa
    for (list<int>::iterator it = lista.begin(); it != lista.end(); it++) 
        cout << *it << " ";
    cout << endl;

    return 0;

}
