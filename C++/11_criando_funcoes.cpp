#include <iostream>

using namespace std;

//Funcao resposavel por calcular o resto e saber se eh par ou impar
bool par(int num)
{
    //Se isso for verdade (par) ele retorna verdade e realizar o comando
    if (num % 2 == 0)
    {
        return true;
    }
    //Se for falso, ele realiza esse outro comando retornando falso
    else
    {
        return false;
    }
}

void mensagem()
{
    cout << "APRENDENDO C++" << endl;
}

int main()
{

    int n;

    //Funcao void
    mensagem();

    cout << "Digite um numero: ";
    cin >> n;

    //Se a funcao par, retornar verdade, ela realiza esse outro comando
    if (par(n)) // O 'n' esta apontando para o 'num' da outra funcao.
    {
        cout << "O numero " << n << " eh par." << endl;
    }
    //Caso a funcao retone falso, esse else sera ativado e realizara o comando
    else
    {
        cout << "O numero " << n << " eh impar." << endl;
    }

    return 0;
}
