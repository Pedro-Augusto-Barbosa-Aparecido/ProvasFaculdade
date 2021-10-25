#include <iostream>

using namespace std;

int main() {

    int *vet = NULL; // ponteiro para o vetor
    int tam = 0; // tamanho do vetor

    int numEl = 0; // numero de elementos pares e positivos

    // pegar valor do tamanho do vetor
    cin >> tam;

    // criar vetor
    vet = new int[tam];

    // populando vetor
    for (int i = 0; i < tam; i++)
        cin >> vet[i];

    // procurando valores pares e positivos
    for (int i = 0; i < tam; i++) 
        if ((vet[i] > 0) && ((vet[i] % 2) == 0))
            numEl++;

    // mostrando numero de elementos pares e positivos
    cout << numEl << endl;

    // limpando memoria
    delete [] vet;

    return 0;

}
