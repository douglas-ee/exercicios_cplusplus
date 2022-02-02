#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	//declarando ponteiros que apontam para outros ponteiros
	int array[] = {1, 2, 3, 4, 5};
	int *parray = &array[0];
	int **pparray = &parray;
	int ***ppparray = &pparray;

	//impressao dos valores dos apontadores
	cout << "***ppparray esta apontando: " << ***ppparray << endl;
	cout << "**pparray esta apontando: " << **pparray << endl;
	cout << "*parray esta apontando: " << *parray << endl;

	cout << "*(parray + 1) apontando: " << *(parray + 1) << endl;
	cout << "array[1] contem: " << array[1] << endl;

	int i = 0;

	//impressao do valor do apontador *parray
	cout << "Aqui temos a impressao atraves de um while e apontador" << endl;
	while (i < 5)
	{
		cout << "*parray[" << i << "]: " << *parray << endl;
		parray++;
		i++;
	}
	cout << endl;

	int j = 0;
	char nome_1[5];
	nome_1[5] = NULL;

	//tamanho da variavel nome_1
	int tam_1 = strlen(nome_1);

	//ponteiro que da o ultimo valor do vetor
	char *pfim = &nome_1[tam_1 - 1];
	cout << "imprimindo o fim do char: " << *pfim << endl;

	//ponteiro que da o primeiro valor do vetor
	char *pini = &nome_1[0];
	cout << "imprimindo o inicio do char: " << *pini << endl;

	//loop while usado para digitar
	cout << "digite o conteudo do vetor: " << endl;
	while (j < tam_1)
	{
		cin >> nome_1[j];
		j++;
	}

	char *invertendo;
	char nome_2[100];
	nome_2[100] = NULL;

	cout << "Digite um nome: " << endl;
	cin >> nome_2;

	//tamanho da variavel nome_2
	int tam_2 = strlen(nome_2);

	//ponteiro recebendo o ultimo valor utel do endereco da variavel
	invertendo = &nome_2[tam_2 - 1];

	//loop do_while responsavel por inverter a palavra
	do
	{
		cout << *invertendo;
		//utilizando um ponteiro, que aponta para letra inicial (pini)
		if (*invertendo-- == (nome_2[0]))
			break;
	}
	while (true);

	cout << endl;

	return 0;
}
