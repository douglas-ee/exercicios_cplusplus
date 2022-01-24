#include <iostream>
#include "my_math.h"

using namespace std;

int main(int argc, char *argv[])
{
	int n = 5;

	cout << "Fatorial de " << n << ": " << fatorial(5) << endl;
	cout << "Quadrado com lado " << n << ": " << area_quadrado(5) << endl;
	cout << "Area retangulo " << area_retangulo(5, 5) << endl;
	return 0;
}
