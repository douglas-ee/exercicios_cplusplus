#include <iostream>
#include <string.h>

using namespace std;

//delcarando uma class
class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

//funcao para retornar idade
int getIdade(Pessoa p1[], const char* nome)
{
	int tam = sizeof(p1);

	for(int i = 0; i < tam; i++)
	{
		if(strcmp(nome, p1[i].nome) == 0)
			return p1[i].idade;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	/*
		//podemos inicializar da seguinte forma strcpy
	   	Pessoa p1;

		strcpy(p1.nome, "Douglas Dos Santos Gomes");
		strcpy(p1.cpf, "000.000.000-00");
		p1.idade = 20;

		//podemos inicializar da seguinte forma
		Pessoa p1 = {"Douglas dos Santos Gomes", "000.000.000-00", 20};

		cout << "Nome: " << p1.nome << "\nCPF: " << p1.cpf << "\nIdade: " << p1.idade << endl;
	*/

	//podemos inicializar com vetores
	Pessoa p1[3] =
	{
		{"Douglas", "000.000.000-00", 20},
		{"Santos", "000.000.000-01", 21},
		{"Gomes", "000.000.000-02", 18},
	};

	cout << "Nome: " << p1[0].nome << "\nCPF: " << p1[0].cpf << "\nIdade: " << p1[0].idade << endl;
	cout << "Nome: " << p1[1].nome << "\nCPF: " << p1[1].cpf << "\nIdade: " << p1[1].idade << endl;
	cout << "Nome: " << p1[2].nome << "\nCPF: " << p1[2].cpf << "\nIdade: " << p1[2].idade << endl;

	//chamada da funcao
	int idade = getIdade(p1, "grangeiro");

	if(idade != -1)
		cout << "Idade do grangeiro: " << idade << endl;
	else
		cout << "Pessoa nao encontrada." << endl;


	return 0;
}
