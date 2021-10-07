#include <iostream>

using namespace std;

struct Dado {
    int codigo;

    float preco;

};


int main() {

    Dado *prod = NULL;

    prod = new Dado;

    prod->codigo = 1;
    prod->preco = 1.50;

    cout << prod->codigo;
    cout << " " << prod->preco << endl;

    delete prod;

    return 0;

}
