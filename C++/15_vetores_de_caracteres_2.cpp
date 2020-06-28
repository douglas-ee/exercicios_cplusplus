#include <iostream>
#include <string.h>

using namespace std;

//FUNCAO VOID QUE INVERTE UM CHAR
void inverte(char nome_3[])
{

    //Atraves da biblioteca <string.h> podemos saber o tamanho do char usando o strlen(vetor).
    int tam = strlen(nome_3);

    //For responsavel por inverter o char, ele inverte usando o tamanho do char, pegando o tamanho e reduzindo do fim ao inicio imprimindo-o.
    for (int i = tam - 1; i >= 0; i--)
    {
        cout << nome_3[i];
    }
    cout << endl;
}
//FUNCAO VOID QUE IDENTIFICA SE UM CARACTERE � ALFABETICO
void alfabetico_numerico(char nome_3[])
{
    //Nesse caso estamos usando a funcao isalpha da biblioteca <string.h> para saber se o primeiro caractere eh alfabetico
    if (isalpha(nome_3[0]))
    {
        cout << "Caractere Alfabetico" << endl;
    }
    else
    {
        cout << "Caractere Numerico" << endl;
    }
}
//FUNCAO VOID QUE IDENTIFICA SE UM CARACTERE EH UM DIGITO
void digito(char nome_3[])
{
    //Nesse caso estamos usando a funcao isdigit da biblioteca <string.h> para saber se o primeiro caractere eh um digito numerico
    if (isdigit(nome_3[0]))
    {
        cout << "digito" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
}
//FUNCAO VOID QUE IDENTIFICA SE UM CARACTERE EH MAIUSCULO
void caixa_alta(char nome_3[])
{
    //Nesse caso estamos usando a funcao isupper da biblioteca <string.h> para saber se o primeiro caractere eh maiusculo
    if (isupper(nome_3[0]))
    {
        cout << "maiusculo" << endl;
    }
    else
    {
        cout << "minusculo" << endl;
    }
}
//FUNCAO VOID QUE IDENTIFICA SE UM CARACTERE EH MINUSCULO
void caixa_baixa(char nome_3[])
{
    //Nesse caso estamos usando a funcao isupper da biblioteca <string.h> para saber se o primeiro caractere eh minusculo
    if (islower(nome_3[0]))
    {
        cout << "minusculo" << endl;
    }
    else
    {
        cout << "maiusculo" << endl;
    }
}
//FUNCAO VOID QUE IDENTIFICA SE UM CARACTERE POSSUI ESPACO EM BRANCO
void espaco(char nome_3[])
{
    if (isspace(nome_3[0]))
    {
        cout << "Espaco em branco" << endl;
    }
    else
    {
        cout << "Nao eh espaco em branco" << endl;
    }
}
//FUNCAO VOID QUE IDENTIFICA SE DUAS STRINGS S�O IGUAIS
void compara(char nome_3[], char nome_4[])
{
    if (strcmp(nome_3, nome_4) == 0)
    {
        cout << "strings iguais" << endl;
    }
    else
    {
        cout << "strings diferentes" << endl;
    }
}
//FUNCAO VOID QUE TRANSFORMA UMA STRING MINUSCULA EM MAIUSCULA
void trans_maiusculo(char nome_4[])
{
    //Atraves da biblioteca <string.h> podemos saber o tamanho do char usando o strlen(vetor).
    int tam = strlen(nome_4);

    //Calculamos o tamanho da string para fazer o contador, com a funcao toupper transformamos o que era minuscula em maiuscula no for.
    for (int i = 0; i <= tam; i++)
    {
        nome_4[i] = toupper(nome_4[i]);
        cout << nome_4[i];
    }
    cout << endl;
}
//FUNCAO VOID QUE TRANSFORMA UMA STRING MAIUSCULA EM MINUSCULA
void trans_minusculo(char nome_3[])
{
    //Atraves da biblioteca <string.h> podemos saber o tamanho do char usando o strlen(vetor).
    int tam = strlen(nome_3);

    //Calculamos o tamanho da string para fazer o contador, com a funcao tolower transformamos o que era maiusculo em minuscula no for.
    for (int i = 0; i <= tam; i++)
    {
        nome_3[i] = tolower(nome_3[i]);
        cout << nome_3[i];
    }
    cout << endl;
}
//FUNCAO VOID QUE CONCATENA DUAS STRINGS
void concatenar_strings(char nome[], char sobrenome[])
{
    cout << "Digite seu Primeiro nome: " << endl;
    cin >> nome;
    cout << endl
         << "Digite seu sobrenome: " << endl;
    cin >> sobrenome;

    strcat(nome, sobrenome);
    cout << endl
         << "Seu nome eh: " << nome << endl;
}
//FUNCAO VOID QUE INDENTIFICA SE UMA STRING ESTA CONTIDA NA OUTRA
void substring(char str1[], char str2[])
{
    cout << "Digite a primeira string: " << endl;
    cin >> str1;
    cout << endl
         << "Digite a segunda string: " << endl;
    cin >> str2;

    //Funcao da biblioteca string.h que identifica se uma string esta contida em outra string, ou seja, se eh substring.
    if (strstr(str1, str2))
    {
        cout << "str2 eh substring de str1, pois esta contida nela" << endl;
    }
    else
    {
        cout << "str2 nao eh substring de str1, pois nao esta contida nela" << endl;
    }
}
int main()
{
    //Vetor char, recebendo o nome.
    char nome_3[] = "I LOVE YOU";
    char nome_4[] = "i love you";

    char nome[100], sobrenome[100], str1[100], str2[100];

    //chamando a funcao responsavel por INVERTER
    inverte(nome_3);

    //chamando a funcao responsavel por identificar se eh ALFABETICO
    alfabetico_numerico(nome_3);

    //chamando a funcao responsavel por identificar se eh DIGITO
    digito(nome_3);

    //chamando a funcao responsavel por identificar se eh MAIUSCULO
    caixa_alta(nome_3);

    //chamando a funcao responsavel por identificar se eh MINUSCULO
    caixa_baixa(nome_3);

    //chamando a funcao responsavel por identificar se existir um ESPACO EM BRANCO
    espaco(nome_3);

    //chamando a funcao responsavel por identificar se STRINGS SaO IGUAIS
    compara(nome_3, nome_4);

    //chamando a funcao responsavel por transformar uma STRING DE MINUSCULO PARA MAIUSCULO
    trans_maiusculo(nome_4);

    //chamando a funcao responsavel por transformar uma STRING DE MAIUSCULO PARA MINUSCULO
    trans_minusculo(nome_3);

    //chamando a funcao responsavel por concatenar DUAS STRINGS NUMA SO.
    concatenar_strings(nome, sobrenome);

    //chamando a funcao responsavel por identificar se eh SUBSTRING.
    substring(str1, str2);

    return 0;
}
