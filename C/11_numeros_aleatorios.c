#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funcao principal do programa
void main(){

   //Responsovel por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Variavel que recebe o resto da divisao do numero por 3 (aleatorio entre 0 e 2)
   int aleatorio = rand() % 3;

   //Variavel que recebe o resto da divisao do numero por 5 (aleatorio entre 1 e 5)
   int aleatorioSegundo = (rand() % 5) + 1;

   //Imprime o valor
   printf("%d", aleatorioSegundo);

   //Pausa o programa apos executar
   system("pause");

}
