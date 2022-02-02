#include <iostream>
using namespace std;

//declarando prototipo da funcao
int gerarID();

int main(int argc, char *argv[])
{
	string nome;

	while(true)
	{
		cout << "Digite o nome da pessoa: ";
		cin >> nome;
		cout << "ID gerado para o usuario " << nome << ": " << gerarID() << "\n\n";
	}
	return 0;
}

//declarando funcao
int gerarID()
{
	//declarando variavel static para reter valor pos sair da funcao
	static int ID = 0;
	return ID++;
}
