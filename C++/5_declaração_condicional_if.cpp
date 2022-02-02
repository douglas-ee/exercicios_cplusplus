#include <iostream>

using namespace std;

int main()
{
	int dinheiro = 10;

	//declaracao condicional IF
	if (dinheiro > 10)
	{
		cout << "eu vou ao cinema!" << endl;
	}
	else
	{
		cout << "eu nao vou ao cinema!" << endl;
	}

	/*
	    podemos utilizar operadores como

		igualdade: ==
		igual ou maior: >=
		igual ou menor	<=
		maior: >
		menor: <
		diferente: !=
		E(and): &&
		OU(or): ||
		NOT: !
	*/

	//utilizando uma variavel booleana
	bool var1 = 10 < 20;
	bool var2 = false;
	bool var3 = true;

	cout << var1 << endl;
	cout << var2 << endl;
	cout << var3 << endl;

	if (var1)
	{
		cout << "Verdadeiro" << endl;
	}

	if(!var2 && var3)
	{
		cout << "aprendendo c++" << endl;
	}

	return 0;
}
