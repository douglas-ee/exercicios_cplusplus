#include <iostream>

using namespace std;

class Conta
{
public:
	//atributos da class Conta
	int numero;
	double saldo;

	//metodos depositar da class Conta
	double depositar(double quantidade)
	{
		if(quantidade > 0)
			saldo += quantidade;
		return saldo;
	}
	//metodos retirar da class Conta
	double retirar(double quantidade)
	{
		if(quantidade > 0 && saldo >= quantidade)
			saldo -= quantidade;
		return saldo;
	}
};

int main(int argc, char *argv[])
{
	//passando valores e criando objeto
	Conta c;

	c.numero = 1;
	c.saldo = 97.45;

	cout << "Saldo: " << c.saldo << endl;
	cout << "Saldo depois do deposito: " << c.depositar(75) << endl;
	cout << "Saldo depois do saque: " << c.retirar(120) << endl;
	return 0;
}
