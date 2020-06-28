#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    //Imprimindo somente os numeros pares de 0 a 100
    while (n <= 100)
    {
        if (n % 2 != 0)
        {
            n++;
            /*O continue faz com que a partir desse ponto
			volte para o inicio O WHILE, ate que seja falso*/
            continue;
        }
        cout << n << endl;
        n++;
    }
    return 0;
}