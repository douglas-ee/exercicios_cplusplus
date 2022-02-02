#include <iostream>

using namespace std;

int main()
{
	int var = 10;
	//declarando um ponteiro e atrubuindo o endereco da variavel nele
	int *pvar;
	pvar = &var;

	cout << "Valor da variavel VAR eh: " << var << endl;
	cout << "Valor do apontador PVAR eh: " << pvar << endl;
	cout << "Valor do endereco da variavel &VAR eh: " << &var << endl;
	cout << "Valor do apontador apontando para variavel *PVAR eh: " << *pvar << endl;

	//imprimindo o valor do apontador, que aponta
	cout << *pvar << endl;
	//atribuindo outro valor a variavel
	var = 20;
	cout << *pvar << endl;
	//atribuindo outro valor por meio do apontador
	*pvar = 30;
	//imprimindo o valor do ponteiro e da variavel
	cout << *pvar << endl << var << endl;

	int *parray = new int[10];

	cout << "Digite um numero: ";
	cin >> *(parray);
	cout << "Voce digitou: " << *(parray) << endl;

	cout << "Digite outro numero: ";
	cin >> *(parray + 1);
	cout << "Voce digitou: " << *(parray + 1) << endl;

	//uma maneira de desalocar memoria eh usando a funcao delete.
	delete[] parray;

	cout << "Voce digitou: " << *(parray) << endl;
	cout << "Voce digitou: " << *(parray + 1) << endl;

	//uma boa pratica tambem eh zera um ponteiro para devolver memoria a pilha
	*parray = NULL;

	//Perceba que agora so nos restou um valor lixo, mas usando o NULL, nao eh nada imprimivel
	cout << "Voce digitou: " << *(parray) << endl;
	cout << "Voce digitou: " << *(parray + 1) << endl;

	return 0;
}
