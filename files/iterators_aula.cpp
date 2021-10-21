#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int>::iterator p;
    list <int> pilha;

    pilha.push_front(2);
    pilha.push_front(1);
    pilha.push_front(5);

    for (p = pilha.begin(); p != pilha.end(); p++) 
        cout << *p << endl;

    return 0;

}
