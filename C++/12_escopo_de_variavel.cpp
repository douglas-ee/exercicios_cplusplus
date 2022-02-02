#include <iostream>

using namespace std;

//declarando o prototipo da funcao
void test();

//declarando variavel global
int num_global = 1;

int main()
{
	/*
		A static int serve para saber quantas vezes uma funcao foi chamada
		por que ela eh uma variavel especifica de uma funcao que varia seu valor
		, diferente de uma variavel especifica qualquer.

		A variavel int_global mudou seu valor tambem porque ela eh uma variavel
		comum a todas as funcaes, portanto eh normal ela mudar o valor
		pois o que acontece com uma funcao, nao quebra em outra se for chamada!
	*/
	//chamando a funcao para verificar a contagem das variaveis
	test();
	test();
	test();
	test();
	test();
	test();
	test();

	return 0;
}

void test()
{
	//declarando uma variavel local
	int num_unico = 1;
	//declarando variavel static
	static int num_static = 1;
	cout << "Variavel local: " << num_unico << endl;
	num_unico++;
	cout << "Variavel global: " << num_global << endl;
	num_global++;
	cout << "Variavel static: " << num_static << endl;
	num_static++;

	cout << endl;
}
