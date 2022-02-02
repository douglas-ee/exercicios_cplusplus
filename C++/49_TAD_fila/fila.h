#ifndef _FILA_H_
#define _FILA_H_

#include <list>

using namespace std;

template<class T>
class Fila
{
private:
	list<T> fila;

public:
	void inserir(const T& e)
	{
		fila.push_back(e);
	}

	bool vazia()
	{
		return fila.empty();
	}

	T remover()
	{
		if(!this->vazia())
		{
			T e = fila.front();
			fila.pop_front();
			return e;
		}
		throw "Fila vazia!!";
	}

	T frente()
	{
		if(!this->vazia())
			return fila.front();
		throw "Fila vazia!!";
	}

	T final()
	{
		if(!this->vazia())
			return fila.back();
		throw "Fila vazia!!";
	}

	int tamanho()
	{
		return fila.size();
	}
};

#endif
