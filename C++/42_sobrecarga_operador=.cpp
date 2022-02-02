#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
private:
	char* nome;
	int id;
public:

	//funcao que cria memoria na pilha
	void inicializar(const char* novoNome, int novoID)
	{
		int tam = strlen(novoNome) + 1;
		nome = new char[tam];
		strcpy(nome, novoNome);
		id = novoID;
	}

	//funcao para destruir o construtor
	void destruir()
	{
		delete[] nome;
		nome = NULL;
	}

	//construtor chamando a funcao inicializar com novo dado
	Pessoa(const char* novoNome, int novoID)
	{
		inicializar(novoNome, novoID);
	}

	//construtor chamando a funcao inicializar com dado apontado
	Pessoa(Pessoa& p)
	{
		inicializar(p.nome, p.id);
	}

	//destrutor virtual chamando a funcao destruir
	virtual ~Pessoa()
	{
		destruir();
	}

	//construtor chamando o operador=
	Pessoa& operator=(Pessoa& p)
	{
		//se o dado apontato for diferente do endereço faca
		if(this != &p)
		{
			//destruir e depois inicializar um dado apontato como copia
			destruir();
			inicializar(p.nome, p.id);
		}
		//retornando um valor atual apontado
		return *this;
	}

	const char* getNome()
	{
		return nome;
	}

	int getID()
	{
		return id;
	}

	//funcao que muda a primira letra do nome
	void mudarNome(char i)
	{
		nome[0] = i;
	}
};

int main(int argc, char *argv[])
{
	//criando obejtos e passando valores
	Pessoa p1("marcos", 1), p2("pedro", 2);

	p1 = p2;

	p1.mudarNome('A');

	cout << "Nome: " << p1.getNome() << endl << "ID: " << p1.getID() << endl;
	cout << "Nome: " << p2.getNome() << endl << "ID: " << p2.getID() << endl;
	return 0;
}
