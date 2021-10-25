#include <iostream>
#include <list>

using namespace std;

int soma(list<int> lista) {
    int soma = 0;

    for (list<int>::iterator i = lista.begin(); i != lista.end(); i++) 
        soma += *i;

    return soma;

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

    // somando os valores e mostrando resultado
    cout << soma(vet) << endl;

    return 0;

}
 