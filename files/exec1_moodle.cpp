#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno {
    int n1;
    int n2;
    int n3;
    int n4;

    float media;

};


int main() {

    Aluno *aluno = new Aluno; // struct aloocada

    // capitura das notas
    cin >> aluno->n1;
    cin >> aluno->n2;
    cin >> aluno->n3;
    cin >> aluno->n4;

    // calculo da media
    aluno->media = (aluno->n1 + aluno->n2 + aluno->n3 + aluno->n4) / 4.0;

    // mostrando media
    cout << fixed << setprecision(2);
    cout << aluno->media << endl;

    delete aluno;

    return 0;

}
