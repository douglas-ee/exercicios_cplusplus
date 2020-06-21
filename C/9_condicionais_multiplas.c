#include <stdio.h>
#include <stdlib.h>

//Funcao principal do programa
void main(){

    //Definindo Variaveis
    int a = 18;

    //Conectivo Logico E (AND) , Se UMA COMPARACAO for FALSA, Nao entra no bloco
    if(a > 5 && a > 15){
        printf("\n A variavel 'a' esta entre 5 e 15 ");
    }

    //Conectivo Logico OU (OR) , Se UMA COMPARACAO for VERDADEIRA, ja entra no bloco
    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15 ");
    }

    //Misturando Conectivos
    if( (a > 5 && a < 15) || a == 20 ){
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20 ");
    }

    //Pausa o programa apos executar
    system("pause");

}
