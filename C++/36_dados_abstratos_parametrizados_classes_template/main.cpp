#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char *argv[])
{
	//utilizando tipo char para o TYPE
	Pilha<const char*> p(100);

	//empilhando dados
	p.empilhar("C++");
	p.empilhar("C#");
	p.empilhar("C");
	/*
		p.empilhar(10);
		p.empilhar(10.56);
		p.empilhar('D');
		p.empilhar('O');
		p.empilhar('U');
		p.empilhar('G');
		p.empilhar(15);
		p.empilhar(0.01201921);
	*/

	//desempilhando dados
	p.desempilhar();
	p.desempilhar();

	if(p.vazia())
		cout << "Pilha vazia!\n";
	else
		cout << "Pilha NAO vazia!\n";
	if(p.getTopo() != NULL)
		cout << "Topo: " << p.getTopo() << endl;
	else
		cout << "A pilha esta vazia!!\n";
	return 0;
}
