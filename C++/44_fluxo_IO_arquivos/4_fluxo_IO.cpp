#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	// abrir um arquivo para entrada
	ifstream in("teste_3.txt");
	char c;

	while(true)
	{
		in >> c;
		//verificando se tem algum arquivo a ser lido com fail
		if(in.fail())
			break;
		cout << c;
	}
	return 0;
}
