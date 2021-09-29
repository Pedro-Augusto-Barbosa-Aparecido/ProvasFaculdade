#include <iostream>
#include <cmath>

using namespace std;

void quickSort(int vetor[], int tamanho, int i, int j)
{
    int trab, esq, dir, pivo;

    esq = i;
    dir = j;

    pivo = vetor[(int)round((esq + dir) / 2.0)];

    do {
        while (vetor[esq] < pivo)
            esq++;

        while (vetor[dir] > pivo)
            dir--;

        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;

            esq++;
            dir--;

        }

    } while (esq <= dir);

    if (dir - i >= 0)
        quickSort(vetor, tamanho, i, dir);

    if (j - esq >= 0)
        quickSort(vetor, tamanho, esq, j);

}

int main() {

    int vector[100]; // vetor para armazenar o inout
    int length = 100; // tamanho do vetor
    int aux = 0; // variavel auxiliar

    for (int i = 0; i < 100; i++) {
        // capitura da entrada
        cin >> aux;

        // verificar entrada   
        if (aux == -1) {
            length = i;
            break;

        }

        // inserir no vetor
        vector[i] = aux;

    }

    // ordenar vetor com quickSort
    quickSort(vector, length, 0, (length - 1));

    // mostrar vetor
    for (int i = 0; i < (length - 1); i++) 
        cout << vector[i] << " ";
    cout << vector[length - 1] << endl;

    return 0;

}
