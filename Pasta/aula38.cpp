#include <iostream>

using namespace std;

class Carro
{
private:
	int ano;
public:
	Carro(int ano = 2014)
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
	Carro c;
	cout << "Ano: " << c.getAno();
	return 0;
}