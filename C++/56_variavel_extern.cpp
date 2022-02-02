#include <iostream>

using namespace std;

//declarando uma variavel extern
extern int var;

int main(int argc, char *argv[])
{
	//momoria alocada
	int var = 10;
	cout << var << endl;

	return 0;
}
