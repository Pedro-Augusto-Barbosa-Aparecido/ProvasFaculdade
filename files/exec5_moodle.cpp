#include <iostream>

using namespace std;

int main() {

    int *vet = NULL; // ponteiro para o vetor
    int tam = 0; // tamanho do vetor

    int maior = 0; // maior valor do vetor

    // pegar valor do tamanho do vetor
    cin >> tam;

    // criar vetor
    vet = new int[tam];

    // populando vetor
    for (int i = 0; i < tam; i++)
        cin >> vet[i];

    // procurando maior vetor
    maior = vet[0];

    for (int i = 0; i < tam; i++) 
        if (maior < vet[i])
            maior = vet[i];

    // mostrando maior valor
    cout << maior << endl;

    // limpando memoria
    delete [] vet;

    return 0;

}
