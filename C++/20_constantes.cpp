#include <iostream>

using namespace std;

int main()
{
	//declrando constantes de formas diferentes
	const int vet[] = {1, 2, 3};
	const int *p1 = &vet[0];
	int const *p2 = &vet[1];
	int *const p3 = new int[3];
	const char *const p4 = "Douglas";

	//impressao dos ponteiros constantes
	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;

	//	vet[0] = 5;
	//	vet[1] = 6;

	//passando valores para *p3
	*p3 = 1;
	*(p3 + 1) = 2;
	*(p3 + 2) = 3;

	//impressao do ponteiro constante
	cout << "*(p3 + 0): " << *p3 << endl;
	cout << "*(p3 + 1): " << *(p3 + 1) << endl;
	cout << "*(p3 + 1): " << *(p3 + 2) << endl;

	cout << "*(p4 + 2): " << *(p4 + 2) << endl;

	//passando novos valores para *p3
	*p3 = 4;
	*(p3 + 1) = 5;
	*(p3 + 2) = 6;

	cout << "p3 depois de alterado: " << endl;
	cout << "*(p3 + 0): " << *p3 << endl;
	cout << "*(p3 + 1): " << *(p3 + 1) << endl;
	cout << "*(p3 + 1): " << *(p3 + 2) << endl;

	return 0;
}
