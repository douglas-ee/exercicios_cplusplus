#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num = 11;

	if(num > 10)
		cout << "maior que 10" << endl;
	else
		cout << "menor ou igual a 10" << endl;

	/*
	Operador ternário ?:
	<condicao> ? <operacao 1> : <operacao 2>;
	*/

	num > 10 ? cout << "maior que 10" : cout << "menor ou igual a 10";
	return 0;
}
