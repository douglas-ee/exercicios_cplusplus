#include <iostream>

using namespace std;

//Primeira funcao SOMA
int soma(int n1, int n2)
{
    //O que diferencia uma funcao de outra eh a quantidade de argumentos
    //Nessa sao dois argumentos
    return n1 + n2;
}
//Segunda funcao SOMA
int soma(int n1, int n2, int n3)
{
    //O que diferencia uma funcao de outra eh a quantidade de argumentos
    //Nessa sao tres argumentos
    return n1 + n2 + n3;
}
//Funcao principal
int main()
{
    //Chamdno a primeira funcao SOMA
    cout << soma(1, 2) << endl;
    //Chamdno a segunda funcao SOMA
    cout << soma(1, 2, 3) << endl;

    return 0;
}
