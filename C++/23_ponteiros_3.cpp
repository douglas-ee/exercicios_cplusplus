#include <iostream>

using namespace std;

//Funcao que calcula o tamanho do ponteiro
int my_strlen(char *str)
{
    int tam = 0;
    for (int i = 0; str[i] != '\0'; i++, tam++)
        ;
    return tam;
}
//Funcao que concatena duas strings numa so
char *my_strcat(char *dest, char *orig)
{
    char *resultado;
    //Funcao que calcula o tamanho da string do destino, nome principal.
    int tam_dest = my_strlen(dest);
    //Funcao que calcula o tamanho da string da origem, sobrenome.
    int tam_orig = my_strlen(orig);
    int i, j = 0;
    //Como descobrimos o tamanho do nome e do sobrenome, criamos um char "Resultado" que possuira o tamanho da soma dos dois ja obtidos
    resultado = new char[tam_dest + tam_orig];
    //O ponteiro p_str esta apontando para a variavel (vetor) resultado que possui certo tamanho calculado anteriormente.
    char *p_str = resultado;
    //Laco de repticao que define a contagem de i e j e do nome principal
    for (i = 0; dest[i] != '\0'; i++, j++)
    {
        p_str[j] = dest[i];
    }
    //Laco de repticao que define o resto da contagem de j e do sobrenome
    for (i = 0; orig[i] != '\0'; i++, j++)
    {
        p_str[j] = orig[i];
    }
    //Ponteiro que recebe o valor j contato, e incremente nesse endereco o vazio para fechar a impressao da string concatenada
    p_str[j] = '\0';

    //Retornando o resultado
    return resultado;
}
//Funcao principal que ira receber todas as outras duas funcaes
int main()
{
    //Nome1 = Nome principal
    char *nome1 = new char[100];
    //Nome2 = Sobrenome
    char *nome2 = new char[100];
    cout << "Digite o primeiro nome: ";
    cin >> nome1;
    cout << "Digite o segundo nome: ";
    cin >> nome2;
    //Impressao e concatenacao das duas strings
    cout << "Resultado: " << my_strcat(nome1, nome2) << endl;

    return 0;
}
