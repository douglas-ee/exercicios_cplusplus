#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Funcao principal do programa
void main()
{

    //Imprime na tela
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posicao
    for (cont = 0; cont < TAM; cont++)
    {
        vetor[cont] = vetor[cont] + 1;
    }

    //Exeibindo os valores do vetor
    printf("\nPosicao 0: %d", vetor[0]);
    printf("\nPosicao 1: %d", vetor[1]);
    printf("\nPosicao 2: %d", vetor[2]);

    //Imprimindo vetor em um laco de repeticao
    for (cont = 0; cont < TAM; cont++)
    {
        printf("\nPosicao %d : %d", cont, vetor[cont]);
    }

    //Lendo 3 valores para o vetor
    for (cont = 0; cont < TAM; cont++)
    {
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um laco de repeticao
    for (cont = 0; cont < TAM; cont++)
    {
        printf("\nPosicao %d : %d", cont, vetor[cont]);
    }

    //Pausa o programa apos executar
    system("pause");
}
