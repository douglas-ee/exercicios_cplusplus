#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int k, j, N = 3;

	//loop que imprime os numeros de 1 a 10
	for (int i = 1; i <= 10; i++)
	{
		cout << "Repeticao : " << i << endl;

		//loop que imprime os numeros i e j, N vezes
		for (k = 1, j = 1; k <= N; k++, j++)
		{
			cout << "k: " << k << " - ";
			cout << "j: " << j << endl;
		}
	}

	/*
		Cálculo do fatorial
		0! = 1! = 1
		3! = 3 * 2 * 1 = 6
		4! = 4 * 3 * 2 * 1 = 24
		5! = 5 * 4 * 3 * 2 * 1 = 120
	*/

	int num, fat = 1;

	cout << "Digite um numero: ";
	cin >> num;

	//repticao responsavel por encontrar o fatoreal
	for (int i = 1; i < num; i++)
		fat *= (i + 1);
	printf("Fatoreal de %d: %d", num, fat);

	return 0;
}
