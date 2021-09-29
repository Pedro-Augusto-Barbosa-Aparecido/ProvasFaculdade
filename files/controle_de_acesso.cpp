#include <iostream>

using namespace std;

int binaria(int vetor[],int tamanho, int x){
    bool achou; // var aux p/ busca
    int baixo, meio, alto; // var aux
    baixo = 0;
    alto = tamanho-1;

    achou = false;
    
    while ((baixo <= alto) && (achou == false)) {
        meio = (baixo + alto) / 2;
        
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else 
            achou = true;
    }
    
    if (achou)
        return meio;
    else
        return -1;
    
}

int main () {

    // variaveis
    int ids[21]; // lista com os ids

    int idParaProcurar; // id para procura

    // variaveis auxiliares
    int found; // variavel usada para verificação se id foi encontrado
    int i = 0; // contador

    // capitura dos elementos
    do {
        cin >> ids[i];

        if (ids[i] == -1)
            break;

        i++;

    } while (i < 20);

    cin >> idParaProcurar;

    // chamada da funcao
    found = binaria(ids, i, idParaProcurar);

    // mostrando a saida
    if (found != -1) 
        cout << "Possui acesso" << endl;
    else
        cout << "Nao possui acesso" << endl;
 
    return 0;

}
