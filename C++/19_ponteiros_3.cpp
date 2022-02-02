#include <iostream>

using namespace std;

int my_strlen(char *str);
char *my_strcat(char *dest, char *orig);

int main()
{
	char *nome1 = new char[100];
	char *nome2 = new char[100];

	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	cout << "Digite o segundo nome: ";
	cin >> nome2;

	//impressao e concatenacao das duas strings
	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;

	return 0;
}

//funcao que calcula o tamanho do ponteiro
int my_strlen(char *str)
{
	int tam = 0;
	for (int i = 0; str[i] != '\0'; i++, tam++);

	return tam;
}
//funcao que concatena duas strings numa so
char *my_strcat(char *dest, char *orig)
{
	char *resultado;
	//chamando a funcao
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);

	int i, j = 0;

	resultado = new char[tam_dest + tam_orig];
	//criancao do ponteiro
	char *p_str = resultado;

	for (i = 0; dest[i] != '\0'; i++, j++)
		p_str[j] = dest[i];

	for (i = 0; orig[i] != '\0'; i++, j++)
		p_str[j] = orig[i];

	p_str[j] = '\0';

	return resultado;
}

