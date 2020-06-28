#include <iostream>

using namespace std;

int main()
{
    //Declarando uma variavel e atribuindo 10 ao seu endereco.
    int var = 10;
    //declarando um ponteiro.
    int *pvar;
    //Atribuindo ao ponteiro o endereco de uma variavel.
    pvar = &var;

    //ENDENDA O QUE CONTEM DENTRO DE CADA ESPACO.
    cout << "Valor da variavel VAR eh: " << var << endl;
    cout << "Valor do apontador PVAR eh: " << pvar << endl;
    cout << "Valor do endereco da variavel &VAR eh: " << &var << endl;
    cout << "Valor do apontador apontando para variavel *PVAR eh: " << *pvar << endl;

    //Imprimindo o valor do apontador, que apontara para o endereco da variavel, e mostrara o que tem por la.
    cout << *pvar << endl;
    //atribuindo outro valor a variavel
    var = 20;
    //Imprimindo novamento um valor de um ponteiro.
    cout << *pvar << endl;
    //Alterando o valor atraves do ponteiro
    *pvar = 30;
    //Imprimindo o valor do ponteiro e da variavel, note que o valor da variavel mudou por causa do ponteiro
    cout << *pvar << endl
         << var << endl;

    //AQUI ESTAMOS CRIANDO UM PONTEIRO, E ATRIBUINDO A ELE ATRAVES DA FUNCAO NEW, UM ESPACO DE 10 INTEIROS
    int *parray = new int[10];

    cout << "Digite um numero: ";
    //Aqui estamos alocando no ponteiro, um valor, seria como atribuir um valor a um vetor[0].
    cin >> *(parray);
    cout << "Voce digitou: " << *(parray) << endl;

    cout << "Digite outro numero: ";
    //Aqui estamos alocando no ponteiro, um valor, seria como atribuir um valor a um vetor[1].
    cin >> *(parray + 1);
    cout << "Voce digitou: " << *(parray + 1) << endl;
    //Uma maneira desalocar memoria eh usando a funcao delete.
    delete[] parray;
    //Uma boa pratica tambem eh zera um ponteiro para devolver memoria a pilha
    parray = NULL;
    //Perceba que agora so nos restou um valor lixo, mas usando o NULL, nao eh nada imprimivel
    cout << "Voce digitou: " << *(parray) << endl;
    cout << "Voce digitou: " << *(parray + 1) << endl;

    return 0;
}