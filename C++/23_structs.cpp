#include <iostream>
using namespace std;

struct Pessoa
{
private:
	int idade;

public:
	//declarando o protipo do construtor
	Pessoa(int idade);

	void setIdade(int idade)
	{
		this->idade = idade;
	}

	int getIdade()
	{
		return idade;
	}
};
//declarando a implementacao
Pessoa::Pessoa(int idade)
{
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	//passando dado pelo construtor no objeto p
	Pessoa p(20);
	cout << p.getIdade() << endl;

	return 0;
}
