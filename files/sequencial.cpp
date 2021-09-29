#include <iostream>

using namespace std;

// Função que implementa a busca sequencial
// Se x for encontrado, retorna a posição do mesmo no vetor
// Se x não for encontrado, retorna -1
int sequencial(int vet[], int tam, int x) {
	int i = 0;
	
	do {
		if (vet[i] == x) {
			return i; 
			
		}
		
		i++;
		
	} while (i < tam);
	
	return -1;
	
}

int main(int argc, char** argv)
{
	
	int vetor[101]; // variavel do vetor de numeros
	
	int xValue; // valor a ser procurado
	
	int aux = 0, valorRet; // variaveis auxiliares
	
	// capitura de dados
	while (true) { // capitura dos elementos do vetor
		cin >> vetor[aux];
		
		if (vetor[aux] == -1)
			break;
		
		aux++;
		
	}
	
	cin >> xValue; // capitura do elemento a ser procurado
	
	valorRet = sequencial(vetor, aux+1, xValue); // pega o valor da posicao se encontrado o valor
	
	if (valorRet != -1) // se encontrado
		cout << xValue << " encontrado na posicao " << valorRet << endl;
	else // se nao encontrado
		cout << xValue << " nao encontrado" << endl;
	
	return 0;
	
}
