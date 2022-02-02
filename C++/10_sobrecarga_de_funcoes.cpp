#include <iostream>

using namespace std;

//declarando o prototipo das funcoes
int soma(int n1, int n2);
int soma(int n1, int n2, int n3);

int main()
{
	//chamdno a primeira funcao SOMA
	cout << "resultado da primeira funcao: " << soma(1, 2) << endl;
	//chamdno a segunda funcao SOMA
	cout << "resultado da segunda funcao: " << soma(1, 2, 3) << endl;

	return 0;
}

//primeira funcao SOMA
int soma(int n1, int n2)
{
	return n1 + n2;
}

//segunda funcao SOMA
int soma(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}
