#include <iostream>

using namespace std;


//class GRAU 1 - Pai
class ClasseMae
{
public:
	//exemplo virtual que possibilita o polimorfismo para ligacao tardia
	virtual void mostrarMensagem_1()
	{
		cout << " -> Ola, sou a classe mae" << endl;
	}
	//exemplo que possibilita a ligacao prematura
	void mostrarMensagem_2()
	{
		cout << " -> Ola, sou a classe mae" << endl;
	}
};

//class GRAU 2 - Filho
class ClasseFilha : public ClasseMae
{
public:
	virtual void mostrarMensagem_1()
	{
		cout << " -> Ola, sou a classe filha" << endl;
	}
	void mostrarMensagem_2()
	{
		cout << " -> Ola, sou a classe filha" << endl;
	}
};
//funcao impressao tardia com polimorfismo virtual
void foo_1(ClasseMae* p1)
{
	p1->mostrarMensagem_1();
}

//funcao impressao tardia sem polimorfismo virtual
void foo_2(ClasseMae* p2)
{
	p2->mostrarMensagem_2();
}

int main(int argc, char *argv[])
{
	ClasseMae mae;
	ClasseFilha filha;

	cout << "impressao prematura por hierarquia: " << endl;
	mae.mostrarMensagem_2();
	filha.mostrarMensagem_2();
	cout << endl;

	cout << "impressao tardia com polimorfismo virtual: " << endl;
	foo_1(&mae);
	foo_1(&filha);
	cout << endl;

	cout << "impressao tardia sem polimorfismo virtual: " << endl;
	foo_2(&mae);
	foo_2(&filha);

	return 0;
}
