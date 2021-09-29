#include <iostream>

using namespace std;

void bubbleSort (int vetor[], int tamanho) {
    int i,j; // contadores
    int trab;
    bool troca;
    int limite;

    troca = true;
    limite = tamanho - 1;
    
    while (troca) {
        troca = false;
        
        for (i = 0; i < limite; i++) 
            if (vetor[i] > vetor[i + 1]) {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;

                j = i;
                troca = true;

            }
            
            limite = j;

    }
}

int main () {
    int vetor[999]; // vetor a ser ordenado
    int i = 0; // contador
    int aux; // variavel auxiliar

    // capitura do vetor
    cin >> aux;

    if (aux != 0) {
        do {
            vetor[i] = aux;
            
            i++;

            cin >> aux;

        } while (aux != 0);
    }

    // ordenação decrescente
    bubbleSort(vetor, i);

    // mostrar ordenado
    for (int j = 0; j < (i - 1); j++)
    {
        cout << vetor[j] << " ";
    
    } cout << vetor[i - 1] << endl;
    

    return 0;

}
