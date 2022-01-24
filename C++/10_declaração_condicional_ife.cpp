#include <iostream>

using namespace std;

int main()
{

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

    //Declaracao condicional IF

    int dinheiro = 10;

    if(dinheiro > 10){
        cout << "Eu vou ao cinema!" << "\n";
    }
    else{
        cout << "Eu nao vou ao cinema!" << "\n";
    }

    int n = 11;

    if((n % == 0)){
        cout << "numero impar" << "\n";
    }

    //UTILIZANDO A VARIAVEL BOOLEANA

    bool var = 10 < 20;

    cout << var << endl;

    if(var)
    {
        cout << "Verdadeiro" << "\n";
    }

    return 0;
}
