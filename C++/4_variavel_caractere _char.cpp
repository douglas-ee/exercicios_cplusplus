#include <iostream>

using namespace std;

int main()
{
	//declarando uma variavel caractere
	char a = 'a', b = 'b', c = 'c';

	//imprimindo uma variavel caractere
	cout << a << b << c << endl;

	//trabalhando com os sistema ASCII
	cout << (int)a << endl;
	cout << (int)b << endl;
	cout << (int)c << endl;

	//calculo entre caracteres
	int calculo = ((((a + b + c) * c) / b) - a);

	//valor numerico do ASCII
	cout << calculo << endl;

	//simbulo obtido atraves dos calculos entre caracteres ASCII
	cout << (char)calculo;

	return 0;
}
