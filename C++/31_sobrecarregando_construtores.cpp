#include <iostream>

using namespace std;

//declarando a class Carro
class Carro
{
	//tipo de acesso public
public:
	//atributos ou metodos public
	int ano;
	double preco;

	//sobrecarregando construtores
	Carro()
	{
		ano = 2001;
		preco = 25000;
	}
	Carro(int ano)
	{
		this->ano = ano;
		this->preco = 75000;
	}
	Carro(int ano, double preco)
	{
		this->ano = ano;
		this->preco = preco;
	}
};

int main(int argc, char *argv[])
{
	//criando objetos e atribuindo valores
	Carro carro;
	Carro carro2(2017);
	Carro carro3(2022, 150000);

	cout << "Preco do carro: " << carro.ano << " -> " << carro.preco << endl;
	cout << "Preco do carro2: " << carro2.ano << " -> " << carro2.preco << endl;
	cout << "Preco do carro3: " << carro3.ano << " -> " << carro3.preco << endl;
	return 0;
}
