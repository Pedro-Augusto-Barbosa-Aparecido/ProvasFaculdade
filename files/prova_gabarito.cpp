#include <iostream>

using namespace std;

int main () {

    char *gab = NULL; // ponteiro para o vetor do gabarito 
    char *res = NULL; // ponteiro para o vetor das respostas

    int resCor = 0; // número de respostas corretas

    // alocando os ponteiros
    gab = new char[10];
    res = new char[10];

    // capiturando a entrada do gabarito e das respostas
    for (int i = 0; i < 10; i++) 
        cin >> gab[i];

    for (int i = 0; i < 10; i++)
        cin >> res[i];

    // comparando as respostas com o gabarito
    for (int i = 0; i < 10; i++)
        if (gab[i] == res[i])
            resCor++;

    // mostrando o número de acertos
    cout << resCor << " acertos" << endl;    

    // limpando a memória
    delete [] gab;
    delete [] res;

    return 0;

}
