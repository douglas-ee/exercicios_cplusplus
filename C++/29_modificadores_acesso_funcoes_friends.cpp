#include <iostream>
#include <string.h>

using namespace std;

//prototipo da class LinguagemAmiga
class LinguagemAmiga;

//declarando class
class Linguagem
{
	//chamada da funcao classAmiga
	friend void classAmiga(Linguagem*);
	//tipo de acesso protected
protected:
	//atributos ou metodos protected
	char nome[100];
	LinguagemAmiga* lamiga;

	//tipo de acesso private
private:
	//atributos ou metodos private
	void mostrarNome()
	{
		cout << "Nome: " << nome << endl;
	}

	//tipo de acesso public
public:
	//atributos ou metodos publicos
	void setNome(const char* nome)
	{
		strcpy(this->nome, nome);
	}
	void mostrarNome2()
	{
		mostrarNome();
	}
	void mostrarAmiga();
};

//declarando class
class LinguagemAmiga
{
	//chamada da class Linguagem
	friend class Linguagem;

	//tipo de acesso protected
protected:
	//atributos ou metodos protected
	void mostrarLinguagemAmiga()
	{
		cout << "ola, linguagem amiga!\n";
	}
};

//funcao classAmiga
void classAmiga(Linguagem* l)
{
	cout << "Classe amiga diz: " << l->nome << endl;
}

//funcao metodo da class Linguagem
void Linguagem::mostrarAmiga()
{
	lamiga->mostrarLinguagemAmiga();
}

int main(int argc, char *argv[])
{
	//criancao de objetos e passagem de valores
	Linguagem l;

	l.setNome("C++");
	l.mostrarNome2();
	//classeAmiga(&l);
	l.mostrarAmiga();
	return 0;
}
