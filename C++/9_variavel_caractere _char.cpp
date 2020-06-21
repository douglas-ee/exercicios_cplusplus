#include <iostream>

using namespace std;

int main()
{
	char a = 'a', b = 'b', c = 'c';

	cout << a << b << c << endl;

	//Trabalhando com os sistema ASCII

	cout << (int)a << endl;
	cout << (int)b << endl;
	cout << (int)c << endl;

	//Calculo entre caracteres
	int calculo = ((((a + b + c) *  c) / b) - a);

	//Valor numerico do ASCII
	cout << calculo << endl;

	//Simbulo obtido atraves dos calculos entre caracteres ASCII
	cout << (char)calculo;

	return 0;
}