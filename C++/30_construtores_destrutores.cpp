#include <iostream>
#include <string.h>

using namespace std;

//declarando a class Pessoa
class Pessoa
{
	//tipo de acesso public
public:
	//atributos ou metodos public
	char nome[100];
	int idade;
	//declarando um ponteiro para alocar memoria na pilha
	int* parentes;

	//declando um construtor
	Pessoa(const char* nome, int idade)
	{
		strcpy(this->nome, nome);
		this->idade = idade;
		//alocando memoria na pilha
		parentes = new int[100];
		cout << nome << " -> Entrou no construtor" << endl;
	}
	//metodo Get
	char * getNome()
	{
		return nome;
	}
	//metodo Set
	int getIdade()
	{
		return idade;
	}
	//declando um destrutor
	~Pessoa()
	{
		cout << nome << " -> Entrou no destrutor" << endl;
		//deletando memoria na pilha
		delete[] parentes;
	}
};

int main(int argc, char *argv[])
{
	//criando objetos e atribuindo valores
	Pessoa pessoas[3] =
	{
		{"joao", 30}, {"maria", 20}, {"pedro", 40},
	};
	/*
		Pessoa p("Joao", 30);
		cout << "Nome: " << p.getNome() << endl;
		cout << "Idade: " << p.getIdade() << endl;
	*/
	return 0;
}
