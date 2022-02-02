#include <iostream>
#include "pilha.h"

using namespace std;

//declarando funcao construtor
Pilha::Pilha()
{
	vet = new int[100];
	max_tam = 99;
	topo = -1;
}
//declarando funcao destrutor
Pilha::~Pilha()
{
	delete[] vet;
}
//declarando funcao empilhar
void Pilha::empilhar(int e)
{
	if(topo == max_tam)
		cout << "Pilha cheia!" << endl;
	else
		vet[++topo] = e;
}
//declarando funcao desempilhar
void Pilha::desempilhar()
{
	if(topo == -1)
		cout << "Pilha vazia!!" << endl;
	else
		topo--;
}
//declarando metodos que retorna o topo
int Pilha::getTopo()
{
	if(topo != -1)
		return vet[topo];
	return -1;
}
//declarando metodo que retorna se ta vazio
int Pilha::vazia()
{
	return (topo == -1);
}
