#include <iostream>
#include <string.h>

#define MAX 10

using namespace std;

//Declarando uma class com atributo public (publico).
class Carro
{
public:
    //Variaveis necessarios para a ficha de inscricao dos carros
    char marca[20];
    char nome[20];
    char cor[20];
    char placa[20];
    double preco;
};
//Funcao void que ira ordenar a ordem dos carros pelo nome, ou algoritico Bubler sort!
void ordena(Carro car[], int tam)
{
    Carro aux;

    // ---> LAOS DE REPETICOES RESPONSAVEIS PELO ALINHAMENTO <---
    for (int i = tam; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            //O STRCMP eh uma funcao da biblioteca <string.h> responsavel por comparar strings
            if (strcmp(car[j - 1].nome, car[j].nome) == 1)
            {
                //Aqui atribuimos para AUX, os atributos da CLASS e estamos repassando para o vetor car[]
                //AUX = CAR[0]
                aux = car[j - 1];
                //CAR[0] = CAR[1]
                car[j - 1] = car[j];
                //CAR[1] = AUX
                car[j] = aux;
            }
        }
    }
}
int main(int argc, char *argv[])
{
    Carro car[MAX];

    int i = 0;

    //Laco de repeticao responsavel pela inclusao dos dados
    while (true)
    {
        //Atribuicao dos dados
        cout << "Digite a marca do carro: ";
        cin >> car[i].marca;
        cout << "Digite a nome do carro: ";
        cin >> car[i].nome;
        cout << "Digite a cor do carro: ";
        cin >> car[i].cor;
        cout << "Digite a placa do carro: ";
        cin >> car[i].placa;
        cout << "Digite a preco do carro: ";
        cin >> car[i].preco;

        //Opcao de encerrar o laco
        char resposta;
        cout << "Voce deseja continuar: <S>SIM  ou <N>NAO...";
        cin >> resposta;

        //Laco de encerramento ou continuacao
        if (resposta != 's')
        {
            break;
        }
        cout << endl;
        ;
        i++;
    }

    //Impressao dos dados atribuidos a structs
    cout << "\nExibindo todos os carros...\n";
    for (int j = 0; j <= i; j++)
    {
        cout << "Marca do carro: " << car[j].marca << endl;
        cout << "Nome do carro: " << car[j].nome << endl;
        cout << "Cor do carro: " << car[j].cor << endl;
        cout << "Placa do carro: " << car[j].placa << endl;
        cout << "Preco do carro: " << car[j].preco << endl;
        cout << endl;
    }

    //Chamando a funcao BUBBLE SORT
    ordena(car, i);

    //Impressao dos dados apos utilizar o ordenamento
    cout << "Exibindo os carros ordenados pelo nome...\n\n";
    for (int j = 0; j <= i; j++)
    {
        cout << "Marca do carro: " << car[j].marca << endl;
        cout << "Nome do carro: " << car[j].nome << endl;
        cout << "Cor do carro: " << car[j].cor << endl;
        cout << "Placa do carro: " << car[j].placa << endl;
        cout << "Preco do carro: " << car[j].preco << endl;
        cout << endl;
    }

    return 0;
}
