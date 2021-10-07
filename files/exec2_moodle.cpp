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

    Aluno *alunos = NULL; // struct aloocada
    
    int tam = 0; // tamanho do vetor
    
    float mediaTurma = 0.0; // media da turma

    // capitura do tamanho do vetor
    cin >> tam;

    // criando vetor
    alunos = new Aluno[tam];

    // capitura das notas
    for (int i = 0; i < tam; i++) {
        cin >> alunos[i].n1;
        cin >> alunos[i].n2;
        cin >> alunos[i].n3;
        cin >> alunos[i].n4;

    }
    
    // calculando a media de cada aluno
    for (int i = 0; i < tam; i++) 
        alunos[i].media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3 + alunos[i].n4) / 4.0;

    // calculo da media da turma
    for (int i = 0; i < tam; i++)
        mediaTurma += alunos[i].media;

    // mostrando media
    cout << fixed << setprecision(2);
    cout << mediaTurma / (float) tam << endl;

    delete [] alunos;

    return 0;

}
