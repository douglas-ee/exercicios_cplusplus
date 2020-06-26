#include <iostream>
#include <string.h>

using namespace std;

//Declarando uma struct
typedef struct pessoa
{
	char nome[100];
	int idade;
} t_pessoa;

int main(int argc, char *argv[])
{
	/*
		----- > FAZENDO UMA LISTA DE NOME E DADOS < -----

		char nomes[3][100] = {"Douglas", "Santos", "Gomes"};
		int idades[3] = {20, 19, 18};

		cout << "Nome: " << nomes[0] << endl;
		cout << "Idade: " << idades[0] << endl;
	*/

//	----- > FAZENDO UMA LISTA DE NOME E DADOS COM STRUCTS < -----

	/*
		t_pessoa p[10];

		strcpy(p[0].nome, "Douglas");
		p[0].idade = 20;

		cout << "Nome: " << p[0].nome << endl;
		cout << "Idade: " << p[0].idade << endl;

		strcpy(p[1].nome, "Rayana");
		p[1].idade = 21;

		cout << "Nome: " << p[1].nome << endl;
		cout << "Idade: " << p[1].idade << endl;
	*/
//	----- > FAZENDO UMA LISTA DE NOME E DADOS COM STRUCTS E PONTEIROS < -----

	t_pessoa pessoas[10];
	t_pessoa *p;

	p = &pessoas[0];

	pessoas[0].idade = 20;
	pessoas[1].idade = 21;
	pessoas[2].idade = 22;

	cout << "Idade: " << p->idade << endl;
	cout << "Idade: " << (p + 1)->idade << endl;
	cout << "Idade: " << (p + 2)->idade << endl;

	return 0;
}
