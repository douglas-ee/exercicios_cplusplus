#include <iostream>
#include <string.h>

using namespace std;


void inverte(char nome_1[]);
void alfabetico_numerico(char nome_1[]);
void digito(char nome_1[]);
void caixa_alta(char nome_1[]);
void caixa_baixa(char nome_1[]);
void espaco(char nome_1[]);
void compara(char nome_1[], char nome_2[]);
void trans_maiusculo(char nome_2[]);
void trans_minusculo(char nome_1[]);
void concatenar_strings(char nome[], char sobrenome[]);
void substring(char str1[], char str2[]);

int main()
{
	//vetor char, recebendo o nome.
	char nome_1[] = "DOUGLAS DOS";
	char nome_2[] = " SANTOS GOMES";

	char nome[100], sobrenome[100], str1[100], str2[100];

	//chamando a funcao responsavel por INVERTER
	inverte(nome_1);
	//chamando a funcao responsavel por identificar se eh ALFABETICO
	alfabetico_numerico(nome_1);
	//chamando a funcao responsavel por identificar se eh DIGITO
	digito(nome_1);
	//chamando a funcao responsavel por identificar se eh MAIUSCULO
	caixa_alta(nome_1);
	//chamando a funcao responsavel por identificar se eh MINUSCULO
	caixa_baixa(nome_1);
	//chamando a funcao responsavel por identificar se existir um ESPACO EM BRANCO
	espaco(nome_1);
	//chamando a funcao responsavel por identificar se STRINGS SaO IGUAIS
	compara(nome_1, nome_2);
	//chamando a funcao responsavel por transformar uma STRING DE MINUSCULO PARA MAIUSCULO
	trans_maiusculo(nome_2);
	//chamando a funcao responsavel por transformar uma STRING DE MAIUSCULO PARA MINUSCULO
	trans_minusculo(nome_1);
	//chamando a funcao responsavel por concatenar DUAS STRINGS NUMA SO.
	concatenar_strings(nome, sobrenome);
	//chamando a funcao responsavel por identificar se eh SUBSTRING.
	substring(str1, str2);

	return 0;
}

void inverte(char nome_1[])
{
	int tam = strlen(nome_1);

	//invertemos o char pegando o tamanho e reduzindo do fim ao inicio.
	for (int i = tam - 1; i >= 0; i--)
		cout << nome_1[i];
	cout << endl;
}
void alfabetico_numerico(char nome_1[])
{
	//funcao isalpha da biblioteca para saber se o primeiro caractere eh alfabetico
	if (isalpha(nome_1[0]))
		cout << "Caractere Alfabetico" << endl;
	else
		cout << "Caractere Numerico" << endl;
}
void digito(char nome_1[])
{
	//funcao isdigit da biblioteca para saber se o primeiro caractere eh um digito numerico
	if (isdigit(nome_1[0]))
		cout << "digito" << endl;
	else
		cout << "letra" << endl;
}
void caixa_alta(char nome_1[])
{
	//funcao isupper da biblioteca para saber se o primeiro caractere eh maiusculo
	if (isupper(nome_1[0]))
		cout << "maiusculo" << endl;
	else
		cout << "minusculo" << endl;
}
void caixa_baixa(char nome_1[])
{
	//funcao isupper da biblioteca para saber se o primeiro caractere eh minusculo
	if (islower(nome_1[0]))
		cout << "minusculo" << endl;
	else
		cout << "maiusculo" << endl;
}
void espaco(char nome_1[])
{
	//funcao isspace da biblioteca para saber se ha um espaço em branco
	if (isspace(nome_1[0]))
		cout << "Espaco em branco" << endl;
	else
		cout << "Nao eh espaco em branco" << endl;
}
void compara(char nome_1[], char nome_2[])
{
	//funcao strcmp da biblioteca para comparar strings
	if (strcmp(nome_1, nome_2) == 0)
		cout << "strings iguais" << endl;
	else
		cout << "strings diferentes" << endl;
}
void trans_maiusculo(char nome_2[])
{
	int tam = strlen(nome_2);

	//funcao toupper da biblioteca, transforma o que era minuscula em maiuscula
	for (int i = 0; i <= tam; i++)
	{
		nome_2[i] = toupper(nome_2[i]);
		cout << nome_2[i];
	}
	cout << endl;
}
void trans_minusculo(char nome_1[])
{
	int tam = strlen(nome_1);

	//funcao toupper da biblioteca, transforma o que era maiuscula em minuscula
	for (int i = 0; i <= tam; i++)
	{
		nome_1[i] = tolower(nome_1[i]);
		cout << nome_1[i];
	}
	cout << endl;
}
void concatenar_strings(char nome[], char sobrenome[])
{
	cout << "Digite seu Primeiro nome: " << endl;
	cin >> nome;
	cout << endl
		 << "Digite seu sobrenome: " << endl;
	cin >> sobrenome;

	//funcao strcat da biblioteca concatena strings
	strcat(nome, sobrenome);
	cout << endl
		 << "Seu nome eh: " << nome << endl;
}
void substring(char str1[], char str2[])
{
	cout << "Digite a primeira string: " << endl;
	cin >> str1;
	cout << endl
		 << "Digite a segunda string: " << endl;
	cin >> str2;

	//funcao strstr da biblioteca que identifica se uma string esta contida em outra string, ou seja, se eh substring.
	if (strstr(str1, str2))
		cout << "str2 eh substring de str1, pois esta contida nela" << endl;
	else
		cout << "str2 nao eh substring de str1, pois nao esta contida nela" << endl;
}
