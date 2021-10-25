#include <iostream>
#include <list>

using namespace std;

int main () {

    list <int> vet; // variavel para armazenar a fila
    list <int>::iterator p; // ponteiro para iterar na fila

    int in = 0; // variavel auxiliar para entrada de dados

    // capitura de dados e inserindo items na fila
    for (int i = 0; i < 4; i++) {
        cin >> in;
        vet.push_back(in);

    }
    
    // mostrando fila
    for (p = vet.begin(); p != vet.end(); p++) 
        cout << *p << " ";
    cout << endl;

    return 0;

}
