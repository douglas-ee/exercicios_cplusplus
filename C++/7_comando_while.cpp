#include <iostream>

using namespace std;

int main()
{
	int n1 = 0;

	//loop que imprime os numeros pares de 0 a 100
	while (n1 <= 100)
	{
		if (n1 % 2 != 0)
		{
			n1++;
			/*o continue faz com que a partir desse ponto volte para o inicio O WHILE, ate que seja falso*/
			continue;
		}
		cout << "Numero PAR: " << n1 << endl;
		n1++;
	}


	int n2 = 1;

	//loop que imprime os numeros de 0 a 10
	while(n2 <= 10)
	{
		int i = 0;
		int N = 5;
		//loop que imprime os numeros N vezes
		while(i < N)
		{
			cout << "Numero: " << n2 << endl;
			i++;
		}
		n2++;
	}

	return 0;
}
