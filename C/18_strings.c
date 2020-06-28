#include <stdio.h>
#include <stdlib.h>

//Funcao principal do programa
void main()
{

    //Variaveis
    char palavra[10];

    //Instrucao
    printf("Digite uma palavra");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Le a String
    fgets(palavra, 255, stdin);

    //Limpa as casas nao utilizadas
    palavra[strlen(palavra) - 1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

    //Pausa o programa apos executar
    system("pause");
}
