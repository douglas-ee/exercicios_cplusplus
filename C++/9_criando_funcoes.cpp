#include <iostream>

using namespace std;

//criaçao do prototipo das funcoes
void mensagem(int n);
bool par(int num);

int main()
{
	int n;

	//chamada da funcao
	mensagem(n);

	cout << "Digite um numero: ";
	cin >> n;

	//chamada da funcao dentro do IF
	if (par(n))
		cout << "O numero " << n << " eh par." << endl;
	else
		cout << "O numero " << n << " eh impar." << endl;

	return 0;
}

//funcao responsavel por imprimir o resultado
void mensagem(int n)
{
	cout << "APRENDENDO C++" << endl;
}

//funcao responsavel por distinguir par ou impar
bool par(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}

