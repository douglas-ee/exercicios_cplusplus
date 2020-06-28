#include <iostream>

using namespace std;

int main()
{

    //Declarando um vetor com 10 espacos
    //Armazenamente de 0 a 9...
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i;
        cout << vetor[i] << endl;
    }

    //Informando o TAMANHO do seu vetor
    cout << "Tamanho do vetor" << endl
         << sizeof(vetor) << endl;

    //O tamanho eh 40, porque existem 10 espacos, e cada espaco vale 4 bites

    //Declarando um vetor em aberto
    //Armazenamento dependente da quantidade de escolhas
    int vetor_2[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 4; i++)
    {
        cout << vetor_2[i] << endl;
    }

    //Informando o TAMANHO do seu vetor
    cout << "Tamanho do vetor_2" << endl
         << sizeof(vetor_2) << endl;

    //Imprimindo vetores por cordenadas de armazenamento
    cout << vetor_2[0] << endl;
    cout << vetor_2[1] << endl;
    cout << vetor_2[2] << endl;
    cout << vetor_2[4] << endl;
    //Vetor fora dos limites predestinados
    cout << vetor_2[5] << endl;

    return 0;
}