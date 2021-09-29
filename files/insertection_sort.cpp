#include <iostream>

using namespace std;
 
void insercaoDireta (int vetor[], int tamanho) { 
    int i,j; // contadores
    int chave;
    for (j = 1; j < tamanho; j++) {
        chave = vetor[j];
        i = j-1;

        while ((i >= 0) && (vetor[i] < chave)) {
            vetor[i + 1] = vetor[i];
            i = i-1;

        }
        
        vetor[i + 1] = chave;

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
    insercaoDireta(vetor, i);

    // mostrar ordenado
    for (int j = 0; j < (i - 1); j++)
    {
        cout << vetor[j] << " ";
    
    } cout << vetor[i - 1] << endl;
    

    return 0;

}
