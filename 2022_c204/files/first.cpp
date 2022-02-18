#include <iostream>

using namespace std;

int main() {
	
    int i, j; // contador
    int n = 0; // tamanho do problema

    int cont = 0; // # vezes que a linha foi executada x = i * i  foi executada

    int x = 0; // var aux

    cin >> n;

    for (i = 0; i < n; i++) {
        j = 1;

        while (j < n) {
            x = i * i;
            j = j * 2; 
            ++cont;

        }
    }

    // Escreva aqui o número de vezes que a linha x = i * i foi executada
    cout << cont << endl;

	return 0;

}
