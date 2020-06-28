#include <iostream>

using namespace std;

//Primeira função SOMA
int soma(int n1, int n2)
{
	//O que diferencia uma função de outra é a quantidade argumentos
	//Nessa são dois argumentos
	return n1 + n2;
}
//Segunda função SOMA
int soma( int n1, int n2, int n3)
{
	//O que diferencia uma função de outra é a quantidade argumentos
	//Nessa são tres argumentos
	return n1 + n2 + n3;
}
//Função principal 
int main()
{
	//Chamdno a primeira função SOMA
	cout << soma(1, 2) << endl;
	//Chamdno a segunda função SOMA
	cout << soma(1, 2, 3) << endl;

	return 0;
}
