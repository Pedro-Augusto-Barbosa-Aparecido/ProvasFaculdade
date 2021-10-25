#include <iostream>
#include <list>

using namespace std;

int main () {

    list <int> vet; // variavel para armazenar a pilha
    list <int>::iterator p; // ponteiro para iterar na pilha

    int in = 0; // variavel auxiliar para entrada de dados

    // capitura de dados e inserindo items na pilha
    for (int i = 0; i < 4; i++) {
        cin >> in;
        vet.push_front(in);

    }
    
    // mostrando pilha
    for (p = vet.begin(); p != vet.end(); p++) 
        cout << *p << " ";
    cout << endl;

    return 0;

}
