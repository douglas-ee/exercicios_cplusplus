#include <iostream>

using namespace std;

int main()
{
    int dinheiro = 10;

    //Declaracao condicional IF
    if (dinheiro > 10)
    {
        cout << "Eu vou ao cinema!";
    }
    else
    {
        cout << "Eu n�o vou ao cinema!";
    }

    //Podemos utilizar operadores como

    /*
	Igualdade: ==
	Igual ou maior: >=
	Igual ou menor	<=
	maior: >
	menor: <
	diferente: !=
	E (and): &&
	OU: ||
	NOT: !
	*/

    //UTILIZANDO A VARIAVEL BOOLEANA

    bool var = 10 < 20;

    cout << var << endl;

    if (var)
    {
        cout << "Verdadeiro";
    }

    return 0;
}