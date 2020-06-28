#include <stdio.h>
#include <stdlib.h>

//Funcao principal do programa
void main()
{

    //Definindo Variaveis
    int a = 1;

    //Primeiro confere a condicao, depois repete o bloco
    while (a <= 10)
    {

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a++; //a = a + 1;
    }

    //Alterando o valor de 'a'
    a = 20;

    //Primeiro executa uma vez, depois confere a condicao
    do
    {

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Incremento
        a++; //a = a + 1;

    } while (a <= 10);

    //Pausa o programa apos executar
    system("pause");
}
