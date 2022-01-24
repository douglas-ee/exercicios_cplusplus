#include <iostream>

using namespace std;

bool par(int num);
void mensagem(int n);

int main(int argc, char *argv[])
{
	int n;

	mensagem(n);
	cout << "Digite um numero: ";
	cin >> n;
	if(par(n))
		cout << "O numero " << n << " eh par." << endl;
	else
		cout << "O numero " << n << " eh impar." << endl;
	return 0;
}

void mensagem(int n)
{
	cout << "aprendendo c++" << endl;
}

bool par(int num)
{
	if(num % 2 == 0)
		return true;
	return false;
}
