#include <iostream>

using namespace std;

class Conta
{
public:
	//atributos da class Conta
	int numero;
	double saldo;

	//declarando o prototipo da funcao
	double depositar(double quantidade);
	double retirar(double quantidade);
};

//funcao do metodo depositar da class Conta
double Conta::depositar(double quantidade)
{
	if(quantidade > 0)
		saldo += quantidade;
	return saldo;
}
//funcao do metodo retiar da class Conta
double Conta::retirar(double quantidade)
{
	if(quantidade > 0 && saldo >= quantidade)
		saldo -= quantidade;
	return saldo;
}

int main(int argc, char *argv[])
{
	//passando valores e criando objeto por ponteiro
	Conta c;
	Conta* pc = &c;

	pc->numero = 1;
	pc->saldo = 50;

	cout << "Saldo: " << c.saldo << endl;
	cout << "Saldo depois do deposito: " << pc->depositar(75) << endl;
	cout << "Saldo depois do saque: " << pc->retirar(120) << endl;
	return 0;
}
