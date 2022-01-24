#include <iostream>

//Chamando o namespace para evitar repeticao desnecessaria
using namespace std;

int main()
{

    //operadores binarios

    int n1, n2;
    float resultado_1, resultado_2, resultado_3, resultado_4, resultado_5;

    n1 = 10;
    n2 = 20;

    resultado_1 = n1 + n2;
    resultado_2 = n1 * n2;
    resultado_3 = n1 / n2;
    resultado_4 = n1 & n2;

    //Tranformando uma variavel int em float
    resultado_5 = (float)n1 / n2;

    cout << resultado_1 << "\n";
    cout << resultado_2 << "\n";
    cout << resultado_3 << "\n";
    cout << resultado_4 << "\n";
    cout << resultado_5 << "\n";

    //operadores unarios

    n1 *= 5;
    n2 = (10 + n2) / 2;

    cout << n1 << "\n";
    cout << n2 << "\n";

    return 0;
}
