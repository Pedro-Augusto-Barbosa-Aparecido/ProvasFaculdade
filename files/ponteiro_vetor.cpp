#include <iostream>

using namespace std;

int main() {

    int *vet = NULL;
    int tam = 0;

    cin >> tam;

    vet = new int[tam];

    for (int i = 0; i < tam; i++)
        cin >> vet[i];

    for (int i = 0; i < tam - 1; i++)
        cout << vet[i] << " ";
    cout << vet[tam -1] << endl;

    delete [] vet;

    return 0;

}
