#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char *argv[])
{
	Pilha p;

	//empinhando
	p.empilhar(1); //inicio da pilha
	p.empilhar(2);
	p.empilhar(3);
	p.empilhar(4);
	p.empilhar(5);
	p.empilhar(6);
	p.empilhar(7); // topo da pilha

	//desempilhando
	p.desempilhar();


	cout << "Pilha vazia: " << p.vazia() << endl;
	cout << "Topo: " << p.getTopo() << endl;
	return 0;
}
