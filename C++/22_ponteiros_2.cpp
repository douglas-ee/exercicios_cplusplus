#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	/*----- AQUI TEMOS PONTEIRO APONTANDO PARA PONTEIRO -----*/

	//Declarando um vetor e atribuindo valores ao mesmo
	int array[] = {1, 2, 3, 4, 5};
	//Declarando um ponteiro que aponta para o endereco do vetor ja declarado
	int *parray = &array[0];
	//Declarando um outro ponteiro que aponta para o endereco do ponteiro anterior
	int **pparray = &parray;
	//Declarando mais um outro ponteiro que aponta para o endereco do ponteiro anterior
	int ***ppparray = &pparray;

	/*----- AQUI TEMOS A IMPRESSAO DOS PONTEIROS QUE APONTAM PARA OUTROS PONTEIRO -----*/

	//Mostrando o valor a qual o apontador ***ppparray esta apontando
	cout << "Valor a qual o ***ppparray esta apontando: " << endl;
	cout << ***ppparray << endl;
	//Podemos escrever de duas formas.
	cout << "Valor a qual o *parray apontando: " << endl;
	cout << *(parray + 1) << endl;
	cout << "Valor a qual o array[0] contem: " << endl;
	cout << array[1] << endl;

	//Declarando algumas variaveis que sereo uteis
	int i = 0;

	cout << "Aqui temos a impressao atraves de um while e apontador" << endl;
	while(i < 5)
	{
		cout << *parray << endl;
		parray++;
		i++;
	}
	cout << endl;

	/*----- MANIPULANDO UM VETOR COM PONTEIROS -----*/

		//Declarando algumas variaveis uteis ao codigo
		char nome_1[10];
		//Limpando a variavel para nao termos problemas com cache (lixo)
		nome_1[10] = NULL;
		//Funcao que faz a contagem do tamanho do char
		int tam_1 = strlen(nome_1);
		int j = 0;
		//Ponteiro que da o ultimo valor do vetor
		char *pfim = &nome_1[tam_1 - 1];
		//Ponteiro que da o primeiro valor do vetor
		char *pini = &nome_1[0];

		//While usado para digitar as palavras
		cout << "Digite o conteudo do vetor: " << endl;
		while(j < tam_1)
		{
			cin >> nome_1[j];
			j++;
		}

		//ImpressAo dos dados
		cout << "Imprimindo o fim do char: " << *pfim << endl;
		cout << "Imprimindo o inicio do char: " << *pini << endl;

	/*----- MANIPULANDO UM VETOR COM PONTEIROS -----*/

	//Declarando variaveis uteis ao codigo
	char *invertendo;
	char nome_2[100];
	//Limpando a variavel para nao termos problemas com cache (lixo)
	nome_2[100] = NULL;
	cout << "Digite um nome: " << endl;
	cin >> nome_2;
	//Calculando o tamanho do vetor
	int tam_2 = strlen(nome_2);
	//Ponteiro recebendo o ultimo valor utel do endereco da variavel
	invertendo = &nome_2[tam_2 - 1];

	//Laco de repeticao responsavel por inverter a palavra
	do
	{
		cout << *invertendo;
		//Para o codigo ficar melhor, basta utilizar um ponteiro, que aponta a letra inicial (pini)
		if(*invertendo-- == (nome_2[0]))
		{
			break;
		}
	}
	while(true);

	cout << endl;

	return 0;
}
