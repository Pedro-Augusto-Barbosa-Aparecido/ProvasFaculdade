#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int *vet = NULL; // ponteiro para o vetor
    int tam = 0; // tamanho do vetor

    // capiturando o tamanho do vetor
    cin >> tam;

    // criando vetor
    vet = new int[tam];

    // populando o vetor
    for (int i = 0; i < tam; i++)
        cin >> vet[i];
    
    // mostrando vetor
    for (int i = 0; i < tam - 1; i++)
        cout << vet[i] << " ";
    cout << vet[tam - 1] << endl;    

    delete [] vet;

    return 0;

}
