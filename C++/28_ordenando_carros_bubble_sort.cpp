#include <iostream>
#include <string.h>

#define MAX 10

using namespace std;

//declarando uma class
class Carro
{
public:
	//variaveis necessarios para a ficha de inscricao dos carros
	char marca[20];
	char nome[20];
	char cor[20];
	char placa[20];
	double preco;
};

//declarando o prototipo da funcao
void ordena(Carro car[], int tam);

int main(int argc, char *argv[])
{
	Carro car[MAX];

	int i = 0;

	//loop responsavel pela inclusao dos dados
	while (true)
	{
		cout << "Digite a marca do carro: ";
		cin >> car[i].marca;
		cout << "Digite a nome do carro: ";
		cin >> car[i].nome;
		cout << "Digite a cor do carro: ";
		cin >> car[i].cor;
		cout << "Digite a placa do carro: ";
		cin >> car[i].placa;
		cout << "Digite a preco do carro: ";
		cin >> car[i].preco;

		char resposta;
		cout << "Voce deseja continuar: <S>SIM  ou <N>NAO...";
		cin >> resposta;

		//laco de encerramento ou continuacao
		if (resposta != 's')
		{
			break;
		}
		cout << endl;
		;
		i++;
	}

	//impressao dos dados atribuidos a structs
	cout << "\nExibindo todos os carros...\n";
	for (int j = 0; j <= i; j++)
	{
		cout << "Marca do carro: " << car[j].marca << endl;
		cout << "Nome do carro: " << car[j].nome << endl;
		cout << "Cor do carro: " << car[j].cor << endl;
		cout << "Placa do carro: " << car[j].placa << endl;
		cout << "Preco do carro: " << car[j].preco << endl;
		cout << endl;
	}

	//chamando a funcao bubble sort
	ordena(car, i);

	//impressao dos dados apos utilizar o ordenamento
	cout << "Exibindo os carros ordenados pelo nome...\n\n";
	for (int j = 0; j <= i; j++)
	{
		cout << "Marca do carro: " << car[j].marca << endl;
		cout << "Nome do carro: " << car[j].nome << endl;
		cout << "Cor do carro: " << car[j].cor << endl;
		cout << "Placa do carro: " << car[j].placa << endl;
		cout << "Preco do carro: " << car[j].preco << endl;
		cout << endl;
	}

	return 0;
}

//funcao que ira ordenar pelo nome por meio do Bubler sort
void ordena(Carro car[], int tam)
{
	Carro aux;

	//loop for responsavel pelo ordenamento
	for (int i = tam; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			//strcmp eh responsavel por comparar strings
			if (strcmp(car[j - 1].nome, car[j].nome) == 1)
			{
				//AUX = CAR[0]
				aux = car[j - 1];
				//CAR[0] = CAR[1]
				car[j - 1] = car[j];
				//CAR[1] = AUX
				car[j] = aux;
			}
		}
	}
}
