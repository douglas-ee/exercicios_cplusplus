#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome_4[]);

int main()
{
	int i = 0;
	//declarando um vetor char
	char nome_1[] = {'C', '+', '+', '\0'};
	char nome_2[] = "Douglas";
	char nome_3[] = "Santos";
	char nome_4[] = "Gomes";

	//imprimindo o vetor nome_1
	while(nome_1[i] != '\0')
		cout << nome_1[i++] ;

	cout << endl;
	i = 0;
	//imprimindo o vetor nome_2
	while(nome_2[i] != '\0')
		cout << nome_2[i++];

	cout << endl;
	i = 0;
	//imprimindo o vetor nome_3
	do
	{
		cout << nome_3[i];
	}
	while(nome_3[i++]);
	cout << endl;
	i = 0;

	inverte(nome_4);

	return 0;
}

void inverte(char nome_4[])
{

	//obtendo o tamanho da string com a biblioteca
	int tam = strlen(nome_4);

	//invertendo o nome digitado
	for (int i = tam - 1; i >= 0; i--)
		cout << nome_4[i];
}
