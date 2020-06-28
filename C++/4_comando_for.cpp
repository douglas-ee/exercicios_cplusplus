#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i;
    }

    //Podemos escrever ao inves de dois FOR

    int i, j;

    for (i = 1, j = 1; i <= 3; i++, j++)
    {
        cout << i;
        cout << j;
    }

    cout << endl;

    //CALCULANDO O FATOREAL

    //Declarando as variaveis
    int num, fat = 1;

    //Imprimindo
    cout << "Digite um numero: ";
    cin >> num;

    //repticao responsavel por encontrar o fatoreal
    for (int i = 1; i < num; i++)
    {
        fat *= (i + 1);
    }
    printf("Fatoreal de %d: %d", num, fat);

    return 0;
}
