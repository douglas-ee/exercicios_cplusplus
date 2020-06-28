#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Funcao principal do programa
void main()
{

    //Imprime na tela
    printf("%d", TAM);

    int i;

    //Contagem ate 10
    for (i = 1; i <= TAM; i++)
    {
        printf("\n%d", i);
    }

    //Pausa o programa apos executar
    system("pause");
}
