#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome_3[])
{

	//Obtendo o tamanho da string
	int tam = strlen(nome_3);

/*Ao inves de utilizarmos esse for para descobrir o tamanho da string
poderiamos substituir por uma funcao que a biblioteca <string.h> disponibiliza
que eh o:

 int tam = strlen(nome_3);

	for(tam = 0; nome_3[tam]; tam++)
	{

	}
*/

	//Invertendo o nome digitado
	for(int i = tam - 1; i >= 0; i--)
	{
		cout << nome_3[i];
	}

}

int main()
{
	/*	int i = 0;

		//Declarando um vetor char
		char nome[] = {'C', '+', '+', '\0'};

		//Imprimindo o nome DOUGLAS
		while(nome[i] != '\0')
			cout << nome[i++] ;

		cout << endl;

		//Declarando um vetor char
		char nome_2[] = "C_C++_C#";

		//Imprimindo o nome C_C++_C#
		while(nome_2[i] != '\0')
			cout << nome_2[i++];

		cout << endl;

		//Imprimindo com o do_While
		do
		{
			cout << nome_2[i];
		}
		while(nome_2[i++]);

		cout << endl;
	*/
	char nome_3[] = "Douglas Dos Santos Gomes";

	inverte(nome_3);

	return 0;
}
