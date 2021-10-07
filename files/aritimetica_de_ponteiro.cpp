#include <iostream>

using namespace std;

int main() {

    int vet[3];

    int *pont = NULL;

    vet[0] = 2;
    vet[1] = 1;
    vet[2] = 0;

    cout << vet << endl;
    cout << *vet << endl;

    pont = vet;
    cout << *pont << endl;
    pont++;
    cout << *pont << endl;
    pont++;
    cout << *pont << endl;
    pont--;
    cout << *pont << endl;

    return 8;

}
