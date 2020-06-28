#include <iostream>

using namespace std;

/* ----- Poderiamos utilizar a biblioteca <string.h>, e sua função de
contagem de tamanho strlen(vetor) e em seguida a sua função de concatenação
de strings, strcat(string1, string2). Abreviariamos bastante o codigo. -----*/

//Função que calcula o tamanho do ponteiro
int my_strlen(char *str)
{
	int tam = 0;
	for(int i = 0; str[i] != '\0'; i++, tam++);
	return tam;
}
//Função que concatena duas strings numa só
char *my_strcat(char *dest, char *orig)
{
	char *resultado;
	//Função que calcula o tamanho da string do destino, nome principal.
	int tam_dest = my_strlen(dest);
	//Função que calcula o tamanho da string da origem, sobrenome.
	int tam_orig = my_strlen(orig);
	int i, j = 0;
	//Como descobrimos o tamanho do nome e do sobrenome, criamos um char "Resultado" que possuirá o tamanho da soma dos dois ja obtidos
	resultado = new char[tam_dest + tam_orig];
	//O ponteiro p_str está apontando para a variavel (vetor) resultado que possui certo tamanho calculado anteriormente.
	char *p_str = resultado;
	//Laço de reptição que define a contagem de i e j e do nome principal
	for(i = 0; dest[i] != '\0'; i++, j++)
	{
		p_str[j] = dest[i];
	}
	//Laço de reptição que define o resto da contagem de j e do sobrenome
	for(i = 0; orig[i] != '\0'; i++, j++)
	{
		p_str[j] = orig[i];
	}
	//Ponteiro que recebe o valor j contato, e incremente nesse endereço o vazio para fechar a impressão da string concatenada
	p_str[j] = '\0';

	//Retornando o resultado
	return resultado;
}
//Função principal que irá receber todas as outras duas funções
int main()
{
	//Nome1 = Nome principal
	char * nome1 = new char[100];
	//Nome2 = Sobrenome
	char * nome2 = new char[100];
	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	cout << "Digite o segundo nome: ";
	cin >> nome2;
	//Impressão e concatenação das duas strings
	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;

	return 0;
}
