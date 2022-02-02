#include <iostream>

using namespace std;

int main()
{
	//declarando um vetor
	int vetor[10];

	//loop for que percorre o vetor
	for (int i = 1; i <= 10; i++)
	{
		vetor[i] = i;
		cout << vetor[i] << endl;
	}

	//informando o tamanho do seu vetor
	cout << endl << "tamanho do vetor em bites: " << sizeof(vetor) << endl << endl;

	//declarando um vetor em aberto, tamanho depende da quantidade inserida
	int vetor_2[] = {1, 2, 3, 4, 5};

	//loop for que percorre o vetor_2
	for (int i = 0; i <= 4; i++)
		cout << vetor_2[i] << endl;

	//informando o tamanho do seu vetor_2
	cout << endl << "tamanho do vetor_2 em bites: " << sizeof(vetor_2) << endl << endl;

	//imprimindo vetores por cordenadas de armazenamento
	cout << vetor_2[0] << endl;
	cout << vetor_2[1] << endl;
	cout << vetor_2[2] << endl;
	cout << vetor_2[4] << endl;
	//vetor fora dos limites definidos
	cout << vetor_2[5] << endl;

	return 0;
}
