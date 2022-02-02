#include <iostream>
#include <locale>
#include "Metodos.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int hora, min, seg, opc = 1;
	int *ponh, *pontm, *ponts;
	ponh = &hora;
	pontm = &min;
	ponts = &seg;
	Relogio dados;

	while (opc != 2)
	{
		cout << "Informe o horario com horas, minutos e segundo: " << endl;
		cin >> hora;
		cin >> min;
		cin >> seg;
		dados.SetHora(hora, min, seg);
		cout << "Sua hora com horas, minutos e segundos eh: " << hora << min << seg << endl;

		dados.Atualiza_segundo();
		cout << "Sua hora atualizada com horas, minutos e segundos eh: " << ponh << pontm << ponts << endl;

		cout << "Escolha a seguinte opcao:" << endl;
		cout << "1-continuar || 2-parar" << endl;
		cin >> opc;
	};
	return 0;
};
