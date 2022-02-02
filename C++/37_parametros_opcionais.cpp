#include <iostream>

using namespace std;

class Carro
{
private:
	int ano;
public:
	//parametro opcional default
	Carro(int ano = 2021)
	{
		this->ano = ano;
	}
	int getAno()
	{
		return ano;
	}
	void setAno(int ano)
	{
		this->ano = ano;
	}
};

int main(int argc, char *argv[])
{
	//Carro c;
	Carro c(2022);
	cout << "Ano: " << c.getAno();
	return 0;
}