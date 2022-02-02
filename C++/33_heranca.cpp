#include <iostream>
#include <string.h>

using namespace std;

//class GRAU 1 - Pai
class Animal
{
protected:
	char* nome;

public:
	//declarando construtor
	Animal(const char* nome)
	{
		cout << endl << "Construindo animal..." << endl;
		this->nome = new char[strlen(nome) + 1];
		strcpy(this->nome, nome);
	}
	//declarando destrutor
	~Animal()
	{
		cout << endl << "Destruindo animal..." << endl;
		delete[] nome;
		nome = NULL;
	}
	const char* getNome()
	{
		return nome;
	}
};

//class GRAU 2 - Filho
class Cachorro : public Animal
{
protected:
	int idade;

public:
	//declarando construtor Cachorro
	Cachorro(const char* nome): Animal(nome)
	{
		cout << "Construindo cachorro..." << endl;
		idade = 0;
	}
	int getIdade()
	{
		return idade;
	}
	void setIdade(int idade)
	{
		this->idade = idade;
	}
};

//class GRAU 2 - Filho
class Gato : public Animal
{
protected:
	int idade;

public:
	//declarando construtor Gato
	Gato(const char* nome): Animal(nome)
	{
		cout << "Construindo Gato..." << endl;
		idade = 0;
	}
	int getIdade()
	{
		return idade;
	}
	void setIdade(int idade)
	{
		this->idade = idade;
	}
};

int main(int argc, char *argv[])
{
	//declarando objetos e atribuindo valores
	Cachorro c("Pastor_Alemao");
	c.setIdade(7);

	cout << "Nome: " << c.getNome() << endl;
	cout << "Idade: " << c.getIdade() << endl;

	Gato g("Persa");
	g.setIdade(10);

	cout << "Nome: " << g.getNome() << endl;
	cout << "Idade: " << g.getIdade() << endl;

	return 0;
}
