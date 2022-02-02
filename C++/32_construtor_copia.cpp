#include <iostream>
#include <string.h>

using namespace std;

//declarando a class Estudante
class Estudante
{
	//tipo de acesso protected
protected:
	//atributos ou metodos protected
	char* nome;

	//tipo de acesso public
public:
	//declarando construtores
	Estudante(const char* nome)
	{
		cout << "Construindo objeto: " << nome << endl;
		//descobrindo o tamanho necessario para construir um char
		int tam = strlen(nome) + 1;
		//alocando memoria na pilha
		this->nome = new char[tam];
		strcpy(this->nome, nome);
	}
	//construtor de copia
	Estudante(const Estudante& e)
	{
		cout << "Construindo copia de " << e.nome << endl;
		//descobrindo o tamanho necessario para construir uma copia do char
		int tam = strlen(e.nome) + strlen("Copia de ") + 1;
		//alocando memoria na pilha
		this->nome = new char[tam];
		strcpy(this->nome, "Copia de ");
		strcat(this->nome, e.nome);
	}
	//declarando destrutor
	~Estudante()
	{
		cout << "Destruindo... " << nome << endl;
		delete[] nome;
		nome = NULL;
	}

	const char* getNome()
	{
		return nome;
	}
};

//funcao que passa valores
void foo2(Estudante e)
{

}

//funcao que passa e imprime valores
void foo()
{
	Estudante estudante("joao");
	foo2(estudante);
	cout << "Estudante " << estudante.getNome() << endl;
}

int main(int argc, char *argv[])
{
	//chamada da funcao
	foo();

	return 0;
}
