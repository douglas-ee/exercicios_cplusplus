#include <iostream>

#define MAX 50

using namespace std;

int main(int argc, char *argv[])
{
	char nome[MAX];

	cout << "Digite o seu nome: ";
	//cin >> nome;
	cin.get(nome, MAX);
	cout << "Hello " << nome << endl;
	return 0;
}
