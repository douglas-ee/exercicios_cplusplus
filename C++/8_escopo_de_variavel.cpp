#include <iostream>

using namespace std;

int num_global = 10;

void test(){
	int num_unico = 9;
	//Geralmente usada para saber quantas vezes a funcao foi chamada
	static int  num_static = 1;
	cout << "Variavel local: " << num_unico << endl;
	num_unico++;
	cout << "Variavel global: " << num_global << endl;
	num_global++;
	cout << "Variavel static: " << num_static << endl;
	num_static++;
}

int main()
{
/* A static int serve para saber quantas vezes uma funcao foi chamada
por que ele eh uma variavel especifica de uma funcao que varia seu valor
, diferente de uma variavel especifica qualquer.

A variavel int_global mudou seu valor tamb�m porque ela eh uma variavel
comum a todas as funcaes, portanto eh normal ela mudar o valor
pois o que acontece com uma funcao, nao quebra em outra se for chamada!*/
	test();
	test();
	test();
	test();
	test();
	test();
	test();

	return 0;
}