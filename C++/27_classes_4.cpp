#include <iostream>

using namespace std;

class Conta
{
public:
	//atributos da class Conta
	int numero;
	double saldo;

	//declarando os prototipos das funcoes
	double depositar(double quantidade);
	double retirar(double quantidade);
	double getSaldo();
	int getNumero();
};

//funcao do metodo depositar da class Conta
double Conta::depositar(double quantidade)
{
	if(quantidade > 0)
		saldo += quantidade;
	return saldo;
}
//funcao do metodo retirar da class Conta
double Conta::retirar(double quantidade)
{
	if(quantidade > 0 && saldo >= quantidade)
		saldo -= quantidade;
	return saldo;
}
//funcao do metodo getSaldo da class Conta
double Conta::getSaldo()
{
	return saldo;
}
//funcao do metodo getNumero da class Conta
int Conta::getNumero()
{
	return numero;
}

//declarando o prototipo das funcoes
void foo(Conta& c);
Conta* novaConta(int numero);

int main(int argc, char *argv[])
{
	//passando valores e criando objeto por ponteiro
	Conta* pc = novaConta(1111);

	cout << "Numero: " << pc->getNumero() << endl;
	cout << "Saldo: " << pc->getSaldo() << endl;
	return 0;
}

//funcao depositar da class Conta
void foo(Conta& c)
{
	c.depositar(50);
}
//funcao que aloca memoria na pilha
Conta* novaConta(int numero)
{
	Conta* c = new Conta;
	c->numero = numero;
	c->saldo = 0.0;
	return c;
}
