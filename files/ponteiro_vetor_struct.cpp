#include <iostream>

using namespace std;

struct Dado {
    int codigo;

    float preco;

};


int main() {

    Dado *prod = NULL;
    int tam = 0;

    cin >> tam;

    prod = new Dado[tam];

    for (int i = 0; i < tam; i++) {
        cin >> prod[i].codigo;
        cin >> prod[i].preco;

    }

    for (int i = 0; i < tam; i++) {
        cout << prod[i].codigo << " " << prod[i].preco << endl;
    }
        
    delete [] prod;

    return 0;

}
