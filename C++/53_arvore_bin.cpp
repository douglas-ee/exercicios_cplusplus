#include <iostream>
using namespace std;

class No
{
private:
	No *esq, *dir;
	int chave;

public:
	No(int chave)
	{
		this->chave = chave;
		esq = NULL;
		dir = NULL;
	}

	int getChave()
	{
		return chave;
	}

	//funcoes getters e setters
	No* getEsq()
	{
		return esq;
	}

	No* getDir()
	{
		return dir;
	}

	void setEsq(No *no)
	{
		esq = no;
	}

	void setDir(No *no)
	{
		dir = no;
	}
};

class Arvore
{
private:
	No *raiz;

public:
	Arvore()
	{
		raiz = NULL;
	}

	void inserir(int chave)
	{
		if(raiz == NULL) //verifica se a arvore esta vazia
			raiz = new No(chave); //cria um novo no
		else
			inserirAux(raiz, chave);
	}

	void inserirAux(No *no, int chave)
	{
		//se for menor, entao insere a esquerda
		if(chave < no->getChave())
		{
			//verifica se a esquerda eh nulo
			if(no->getEsq() == NULL)
			{
				No *novo_no = new No(chave);
				no->setEsq(novo_no); //seta o novo_no a esquerda
			}
			else
			{
				//senao, continua percorrendo recursivamente
				inserirAux(no->getEsq(), chave);
			}
		}
		//se for maior, entao insere a direita
		else if(chave > no->getChave())
		{
			//verifica se a direita eh nulo
			if(no->getDir() == NULL)
			{
				No *novo_no = new No(chave);
				no->setDir(novo_no); //seta o novo_no a direita
			}
			else
			{
				//senao, continua percorrendo recursivamente
				inserirAux(no->getDir(), chave);
			}
		}
		//se for igual, nao vai inserir
		//não pode existir 2 chaves iguais
	}

	No* getRaiz()
	{
		return raiz;
	}

	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}
};

int main(int argc, char *argv[])
{
	Arvore arv;

	//insere as chaves
	arv.inserir(1);
	arv.inserir(3);
	arv.inserir(2);
	arv.inserir(5);
	arv.inserir(4);
	arv.inserir(7);
	arv.inserir(6);
	arv.inserir(9);
	arv.inserir(8);
	arv.inserir(11);
	arv.inserir(10);
	arv.inserir(12);

	//percorre em ordem iniciando da raiz
	cout << "Percorrendo em ordem...\n";
	arv.emOrdem(arv.getRaiz());

	return 0;
}
