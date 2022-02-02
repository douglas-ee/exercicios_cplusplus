
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	// abrir um arquivo para entrada
	ifstream in("teste.txt");
	string texto;
	char c = in.get();
	texto.push_back(c);

	cout << "\nMostrando cada caractere:\n";
	// ler o conteúdo desse arquivo
	while(in.good())
	{
		cout << c;
		c = in.get();
		texto.push_back(c);
	}

	cout << "\n\nMostrando a string:\n" << texto << endl;
	return 0;
}
