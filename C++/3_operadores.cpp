#include <iostream>

//Chamando o namespace para evitar repeticao desnecessaria
using namespace std;

int main()
{
    int n1, n2;
    float resultado;

    n1 = 10;
    n2 = 20;

    //Tranformando uma variavel int em float
    resultado = (float)n1 / n2;

    cout << resultado;

    return 0;
}