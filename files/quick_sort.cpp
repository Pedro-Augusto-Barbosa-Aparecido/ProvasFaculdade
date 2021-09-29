#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct dados {
    int codigo; // codigo do produto
    int quantidade; // quantidade em estoque
    float preco; // preco unitario

};

void quickSort(dados vetor[], int i, int j)
{
    int esq, dir, pivo;

    dados trab;

    esq = i;
    dir = j;
    
    pivo = vetor[(int) round((esq + dir) / 2.0)].codigo;

    do {
        while (vetor[esq].codigo < pivo)
            esq++;

        while (vetor[dir].codigo > pivo)
            dir--;

        if (esq <= dir) {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;

        }

    } while (esq <= dir);

    if (dir-i >= 0)
        quickSort(vetor, i, dir);

    if (j-esq >= 0)
        quickSort(vetor, esq, j);

}

int main() {

    dados dataVec[102]; // vetor de dados

    int n; // tamanho da entrada de dados

    // capitura do tamanho da entrada de dados
    cin >> n;

    // capitura dos dados de estoque
    for (int i = 0; i < n; i++) 
        cin >> dataVec[i].codigo >> dataVec[i].quantidade >> dataVec[i].preco;

    // ordenando o vetor
    quickSort(dataVec, 0, (n - 1));

    // configurando as saidas
    cout << fixed << setprecision(2);

    // mostrando a saida
    for (int i = 0; i < n; i++) {
        cout << "Codigo: " << dataVec[i].codigo << endl;
        cout << "Quantidade em estoque: " << dataVec[i].quantidade << endl;
        cout << "Preco unitario: R$ " << dataVec[i].preco << endl;
        cout << endl;
    
    }

    return 0;

}
