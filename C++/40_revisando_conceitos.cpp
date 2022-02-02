#include <iostream>

using namespace std;

//exemplo utilizando operador delete
int main1()
{
	int * p = new int[10];
	*p = 1;
	*(p + 1) = 2;
	cout << *p << endl << *(p + 1) << endl;
	delete[] p;
	return 0;
}

class Pessoa
{
//privates são acessados apenas por funcoes membros e por amigos da classe
private:
	int idade;
	int * vet;
//membros public são visiveis em todos os lugares
public:
	Pessoa(int idade)
	{
		this->idade = idade;
		vet = new int[10];
	}
	~Pessoa()
	{
		delete [] vet;
	}
	int obterIdade()
	{
		return idade;
	}
};

int main2(int argc, char *argv[])
{
	//todos os objetos C++ devem ser inicializados antes de serem usados
	Pessoa * p = new Pessoa(20);
	//o acesso a função membro eh feita com o operador seta porque eh ponteiro
	cout << p->obterIdade() << endl;
	delete p;
	return 0;
}

class ClasseBase
{
private:
	int n;
protected:
	int n1, n2;
public:
	int n3, n4;

	//n1 e n2 são protegidos, n3 e n4 são públicos.
	ClasseBase()
	{
		n = 0;
		n1 = 1;
		n2 = 2;
		n3 = 3;
		n4 = 4;
	}
};

class SubClasse1 : public ClasseBase
{
public:
	void foo()
	{
		cout << "SubClasse1:" << endl;
		//o "n" não é acessível em SubClasse1
		//cout << n << endl;
		cout << n1 << endl << n2 << endl;
		cout << n3 << endl << n4 << endl;
	}
};

class SubClasse2 : private ClasseBase
{
public:
	void foo()
	{
		cout << "\nSubClasse2:" << endl;
		//o "n" não é acessível em SubClasse2
		//cout << n << endl;
		cout << n1 << endl << n2 << endl;
		cout << n3 << endl << n4 << endl;
	}
	int getN3()
	{
		return n3;
	}
};

int main3(int argc, char *argv[])
{
	SubClasse1 sub1;
	SubClasse2 sub2;

	sub1.foo();
	sub2.foo();

	cout << "\nSubClasse1 na main:" << endl;
	cout << sub1.n3 << endl << sub1.n4 << endl;

	cout << "\nSubClasse2 na main:" << endl;
	//cout << sub2.n3 << endl << sub2.n4 << endl;
	cout << "Recuperando n3: " << sub2.getN3() << endl;
	return 0;
}

class Pai1
{
public:
	void foo()
	{
		cout << "Oi, sou o Pai1." << endl;
	}
};

class Pai2
{
public:
	void foo()
	{
		cout << "Oi, sou o Pai2." << endl;
	}
};

class Filha : public Pai1, public Pai2
{

};

int main(int argc, char *argv[])
{
	Filha f;
	SubClasse1 sub1;
	SubClasse2 sub2;

	cout << "codigo 1: " << endl;
	cout << main1() << endl;
	cout << endl;

	cout << "codigo 2: " << endl;
	sub1.foo();
	sub2.foo();
	cout << endl;

	cout << "codigo 3: " << endl;
	f.Pai1::foo();
	f.Pai2::foo();
	cout << endl;

	return 0;
}
