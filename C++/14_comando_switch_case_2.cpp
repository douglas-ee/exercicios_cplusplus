#include <iostream>
/*
	CALCULADORA:
	+: Adicao
	-: Subtracao
	*: Multiplica��o
	/: Divisao
*/


using namespace std;

int main()
{
	//Declarando variaveis
	int num, num2, resultado;
	//Operacao
	char op;

	cout << "Digite o primeiro numero: ";
	cin >> num;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Digite a operacao desejada: ";
	cin >> op;

	switch(op)
	{
	case '+':
		resultado = num + num2;
		cout << "A soma eh: " << resultado << endl;
		break;
	case '-':
		resultado = num - num2;
		cout << "A subtracao eh: " << resultado << endl;
		break;
	case '*':
		resultado = num * num2;
		cout << "A multiplicacao eh: " << resultado << endl;
		break;
	case '/':
		if(num2 != 0)
		{
			resultado = (float)num / num2;
			cout << "A divisao eh: " << resultado << endl;
		}
		else
		{
			cout << "Divisao por zero! ERRO" << endl;
		}
		break;
	default:
		cout << "Digitou o caracter errado";
		break;
	}

	return 0;
}
