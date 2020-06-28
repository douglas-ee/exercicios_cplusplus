#include <stdio.h>
#include <stdlib.h>

//Funcao principal do programa
void main()
{

    //Definindo Variaveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //Subtracao
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

    //Divisao
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    //Multiplicacao
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //Resto da Divisao
    printf("\n O resto da divisao entre %d e %d = %d", a, b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pausa o programa apos executar
    system("pause");
}
