#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Funcao principal do programa
int main()
{

    //Definindo uma String
    string palavra;

    //Imrpimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variavel
    cout << "\nA palavra eh:" << palavra;

    //Pausa o programa apos executar
    system("pause");

    return 0;
}
