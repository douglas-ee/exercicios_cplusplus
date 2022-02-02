#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <string>
using namespace std;

typedef struct Universidade
{
private:
	string nome;

public:
	void setNome(string nome)
	{
		this->nome = nome;
	}

	string obterNome()
	{
		return nome;
	}
} t_universidade;


typedef struct Aluno
{
private:
	string nome;
	t_universidade universidade;

public:
	string obterNome()
	{
		return nome;
	}

	string obterUniversidade()
	{
		return universidade.obterNome();
	}

	void setNome(string nome)
	{
		this->nome = nome;
	}

	void setUniversidade(string nome)
	{
		universidade.setNome(nome);
	}
} t_aluno, Aluno;

#endif
