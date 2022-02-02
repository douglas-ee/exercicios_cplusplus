#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	cout << "Quantidade de argumentos - argc: " << argc << endl;
	cout << "\nArgumentos passados: - argv: " << endl;

	for(int i = 0; i < argc; i++)
		cout << argv[i] << endl;
	return 0;
}
