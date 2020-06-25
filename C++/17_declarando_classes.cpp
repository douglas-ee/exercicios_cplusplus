#include <iostream>
#include <string.h>

using namespace std;

//Delcarando uma CLASS
class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};
int main(int argc, char *argv[])
{
	/*
	---> PODEMOS INICIALIZAR ASSIM <---
	Pessoa p1;

	strcpy(p1.nome, "Douglas Dos Santos Gomes");
	strcpy(p1.cpf, "000.000.000-00");
	p1.idade = 20;


	//---> PODEMOS INICIALIZAR ASSIM TAMBÉM<---
	Pessoa p1 = {"Douglas dos Santos Gomes", "000.000.000-00", 20};

	cout << "Nome: " << p1.nome << "\nCPF: " << p1.cpf << "\nIdade: " << p1.idade << endl;
	*/

	//---> PODEMOS INICIALIZAR COMO UM VETOR <---

	Pessoa p1[3] =
	{
		{
			"Douglas", "000.000.000-00", 20
		},
		{
			"Rayana", "000.000.000-01", 21
		},
		{
			"Culilim", "000.000.000-02", 18
		},
	};

	cout << "Nome: " << p1[0].nome << "\nCPF: " << p1[0].cpf << "\nIdade: " << p1[0].idade << endl;
	cout << "Nome: " << p1[1].nome << "\nCPF: " << p1[1].cpf << "\nIdade: " << p1[1].idade << endl;
	cout << "Nome: " << p1[2].nome << "\nCPF: " << p1[2].cpf << "\nIdade: " << p1[2].idade << endl;

	return 0;
}
