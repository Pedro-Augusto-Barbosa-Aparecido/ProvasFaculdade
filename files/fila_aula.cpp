#include <iostream>
#include <list>

using namespace std;

int main () {

    list <int> fila;

    fila.push_back(2);
    fila.push_back(1);
    fila.push_back(5);

    fila.pop_front();
    cout << *fila.begin() << endl;
    cout << *fila.end() << endl;

    fila.clear();

    fila.push_back(2);
    fila.push_back(1);
    fila.push_back(5);

    while (!fila.empty()) {
        cout << *fila.begin() << endl;
        fila.pop_front();

    }

    return 0;

}
