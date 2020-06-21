#include <stdio.h>
#include <stdlib.h>

//Funcao principal do programa
void main(){

    //Definindo Variaveis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra eh x.");
    }

    //Codigo em ASCII
    printf("\nCodigo da letra = %d", letra);

    //Comparando Codigo ASCII
    if(letra == 120){
         printf("\n A letra eh x.");
    }

    //Pausa o programa apos executar
    system("pause");

}
