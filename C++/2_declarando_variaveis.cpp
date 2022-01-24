#include <iostream>

/*programa simples mostrando como se declara variaveis*/

using namespace std;

int main()
{
    //Declarando variavel
    int idade = 20;
    float distancia = 20.546;
    double distancia_2 = 20.54601921833812173;
    char letra_1 = 'a';
    char letra_2 = 'b';

    int soma = (letra_1 + letra_2)/3;

    char letra = char(soma);

    cout << idade << "\n";
    cout << distancia << "\n";
    cout << distancia_2 << "\n";
    cout << letra_1 << "\n";
    cout << soma << "\n";
    cout << letra << "\n";

    return 0;
}
