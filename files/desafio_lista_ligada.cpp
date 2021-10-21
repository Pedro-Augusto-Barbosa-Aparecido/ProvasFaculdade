#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int>::iterator p;
    list <int> pilha;

    int x = -1;
    int soma = 0;

    while (x != 0) {
        cin >> x;
        pilha.push_front(x);
    
    }
    

    for (p = pilha.begin(); p != pilha.end(); p++) 
        cout << *p << endl;

    for (p = pilha.begin(); p != pilha.end(); p++) 
        soma += *p;

    cout << "soma = " << soma << endl;

    return 0;

}
