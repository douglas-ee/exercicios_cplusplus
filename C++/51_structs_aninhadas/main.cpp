#include <iostream>
#include "aluno.h"

void construirAluno(Aluno& aluno, string nome, string universidade);
void exibirAluno(Aluno& aluno);

int main(int argc, char** argv)
{
	t_aluno aluno;
	t_aluno * ptr_aluno;

	ptr_aluno = &aluno;

	ptr_aluno->setNome("Marcos");
	ptr_aluno->setUniversidade("UFPI");

	cout << "Aluno: " << ptr_aluno->obterNome() << endl;
	cout << "Universidade: " << ptr_aluno->obterUniversidade() << endl;

	Aluno aluno2;
	construirAluno(aluno2, "Bill Gates", "Harvard");
	exibirAluno(aluno2);

	return 0;
}

void construirAluno(Aluno& aluno, string nome, string universidade)
{
	aluno.setNome(nome);
	aluno.setUniversidade(universidade);
}

void exibirAluno(Aluno& aluno)
{
	cout << "\nAluno: " << aluno.obterNome() << endl;
	cout << "Universidade: " << aluno.obterUniversidade() << endl;
}
