#include <iostream>

using namespace std;

class Complexo
{
public:
	int real, imag;

	//construtor passando ponteiros
	Complexo(int real, int imag)
	{
		this->real = real;
		this->imag = imag;
	}

	//construtor passando o operator soma
	Complexo operator+(Complexo& c)
	{
		return Complexo(this->real + c.real, this->imag + c.imag);
	}
};

int main(int argc, char *argv[])
{
	//declarando obejtos e passando valores
	Complexo c1(1, 2), c2(3, 4);
	Complexo c3 = c1 + c2;

	Complexo c4 = c1 + c2 + c3;
	Complexo c5 = c1 + c2 + c3 + c4;
	//Complexo c3 = c1.operator+(c2);

	cout << "Parte real: " << c3.real << endl;
	cout << "Parte imaginaria: " << c3.imag << endl;

	cout << "Parte real: " << c4.real << endl;
	cout << "Parte imaginaria: " << c4.imag << endl;

	cout << "Parte real: " << c5.real << endl;
	cout << "Parte imaginaria: " << c5.imag << endl;

	return 0;
}
