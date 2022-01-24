#include <iostream>

using namespace std;

// Exemplo utilizando operador delete
int main1(int argc, char *argv[])
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
// membros privados são acessados apenas por funções membros e por amigos
// da classe
private:
	int idade;
	int * vet;
// membros públicos são visíveis em todos os lugares.
public:
// membros construtores são implicitamente chamados quando um objeto é criado.
// se nenhum construtor é incluído, então o compilador inclui um construtor
// trivial
	Pessoa(int idade)
	{
		this->idade = idade;
		vet = new int[10];
	}
	/*
		O destrutor é implicitamente chamado quando um objeto da classe
		deixa de existir.
	*/
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
	// Todos os objetos C++ devem ser inicializados antes de serem usados.
	Pessoa * p = new Pessoa(20);
	// o acesso à função membro é feita com o operador seta porque é ponteiro
	cout << p->obterIdade() << endl;
	delete p; // libera memória
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

	ClasseBase()
	{
		n = 0;
		n1 = 1;
		n2 = 2;
		n3 = 3;
		n4 = 4;
	}
};

// a derivação pública é usada quando se quer que a subclasse herde
// a interface inteira da classe base.
class SubClasse1 : public ClasseBase
{
public:
	// n1 e n2 são protegidos, n3 e n4 são públicos.
	void foo()
	{
		cout << "SubClasse1:" << endl;
		// o "n" não é acessível em SubClasse1
		// cout << n << endl;
		// os outros são acessíveis...
		cout << n1 << endl << n2 << endl;
		cout << n3 << endl << n4 << endl;
	}
};

// subclasse privadamente derivada
class SubClasse2 : private ClasseBase
{
public:
	void foo()
	{
		cout << "\nSubClasse2:" << endl;
		// o "n" não é acessível em SubClasse2
		// cout << n << endl;
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
	// membros de dados públicos da classe base, na derivação privada
	// esses membros são privados na subclasse, não consegue acessar.
	//cout << sub2.n3 << endl << sub2.n4 << endl;
	cout << "Recuperando n3: " << sub2.getN3() << endl;
	return 0;
}

// O C++ oferece herança múltipla
// permite mais de uma classe ser chamada de pai de uma nova

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

// a classe Filha herda todos os membros de Pai1 e Pai2
class Filha : public Pai1, public Pai2
{

};

int main(int argc, char *argv[])
{
	Filha f;

	// ambíguo, foo() pode ser de Pai1 ou Pai2
	// f.foo();
	// chamando foo() de Pai1
	f.Pai1::foo();
	// chamando foo() de Pai2
	f.Pai2::foo();
	return 0;
}
