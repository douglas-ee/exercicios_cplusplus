#include <iostream>
#include <math.h>

using namespace  std;

//declarando uma struct
typedef struct Pessoa
{
	string nome;
	int idade;
	double peso, altura;
} t_pessoa;

//declarando o prototipo da funcao
double& calcular_imc(t_pessoa & dados);

int main(int argc, char *argv[])
{
	t_pessoa dados = {"Douglas", 23, 72.5, 1.74};

	//chamando a funcao_IMC
	cout << "IMC: " << calcular_imc(dados) << endl;
	return 0;
}

//declarando funcao
double& calcular_imc(t_pessoa & dados)
{
	double result = dados.peso / pow(dados.altura, 2);
	double& imc = result;

	return imc;
}
