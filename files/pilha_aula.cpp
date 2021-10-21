#include <iostream>
#include <list>

using namespace std;

int main () {

    list <int> pilha;

    pilha.push_front(2);
    pilha.push_front(1);
    pilha.push_front(5);

    pilha.pop_front();
    cout << *pilha.begin() << endl;
    cout << *pilha.end() << endl;

    pilha.clear();

    pilha.push_front(2);
    pilha.push_front(1);
    pilha.push_front(5);

    while (!pilha.empty()) {
        cout << *pilha.begin() << endl;
        pilha.pop_front();

    }

    return 0;
}
