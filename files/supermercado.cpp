#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> estoque; // lista de produtos no estoque
    list<int> venda; // lista de produtos à venda
    list<int>::iterator it; // ponteiuro para fazer get na lista

    int numOp = 0; // numero de operaçoes
    int op = 0; // variavel para operacoes
    int prod = 0; // variavel para o produto

    // capiturando o numero de operacoes
    cin >> numOp;

    // capiturando as operacoes e processando
    for (int i = 0; i < numOp; i++) {
        cin >> op;

        if (op == 1) {
            cin >> prod;

            estoque.push_back(prod);

        } else if (op == 2) {
            it = estoque.begin();
            estoque.pop_front();

            venda.push_front(*it);

        }

    }

    // mostrando listas
    cout << "Estoque: ";

    for (it = estoque.begin(); it != estoque.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Vendas: ";
    for (it = venda.begin(); it != venda.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;

}
