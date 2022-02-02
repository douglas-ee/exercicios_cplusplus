#include <iostream>
#include "lista.h"

int main(int argc, char *argv[])
{
	Lista<string> l;

	l.inserir_final("python");
	l.inserir_final("c++");
	l.inserir_final("ruby");
	l.inserir_inicio("haskell");

	l.mostrar();

	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";

	cout << "\nRemovendo elemento do final...\n";

	l.remover();

	l.mostrar();

	cout << "Tamanho da lista: " << l.tamanho() << endl;

	return 0;
}
