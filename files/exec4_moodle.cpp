#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int *vet = NULL; // ponteiro para o vetor
    int tam = 0; // tamanho do vetor

    float media = 0.0; // media dos numeros inseridos no vetor

    // capiturando o tamanho do vetor
    cin >> tam;

    // criando vetor
    vet = new int[tam];

    // populando o vetor
    for (int i = 0; i < tam; i++)
        cin >> vet[i];
    
    // calculando a media dos numeros inseridos
    for (int i = 0; i < tam; i++)
        media += vet[i];

    media = media / (float) tam;

    // mostrando a media
    cout << fixed << setprecision(2);
    cout << media << endl;

    delete [] vet;

    return 0;

}
