#include <iostream>

using namespace std;

int main()
{
    //Constantes de um int vetor
    const int vet[] = {1, 2, 3};
    //Constantes de um int ponteiro
    const int *p1 = &vet[0];
    int const *p2 = &vet[1];
    //int ponteiro constante que aloca 3 espacos no endereco
    int *const p3 = new int[3];
    //Constante de um char ponteiro constante
    const char *const p4 = "Douglas";

    //Impressao dos ponteiros constantes
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    //	vet[0] = 5;
    //	vet[1] = 6;

    *p3 = 1;
    *(p3 + 1) = 2;
    *(p3 + 2) = 3;

    //Impressao do ponteiro constante
    cout << "p3:" << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;

    //Impressao do p4
    cout << "p4: " << endl
         << *(p4 + 2) << endl;

    *p3 = 4;
    *(p3 + 1) = 5;
    *(p3 + 2) = 6;

    cout << "p3 depois de alterado: " << endl;
    cout << *p3 << endl;
    cout << *(p3 + 1) << endl;
    cout << *(p3 + 2) << endl;

    return 0;
}