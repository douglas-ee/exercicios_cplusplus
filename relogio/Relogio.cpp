#include <iostream>

#include "Relogio.h"
using namespace std;

Relogio::Relogio()
{
	hora = minuto = segundo = 0;
}

void Relogio::SetHora(int hr, int min, int seg)
{
	if (hr <= 23)
		hora = hr;
	else
		hora = 0;
	if (min <= 60)
		minuto = min;
	else
		minuto = 0;
	if (seg <= 60)
		segundo = seg;
	else
		segundo = 0;
}

void Relogio::GetHora(int *h, int *m, int *s)
{
	*h = horaAtual;
	*m = minAtual;
	*s = segAtual;
}
void Relogio::Atualiza_segundo()
{
	if (segAtual < 59)
	{
		segAtual++;
	}
	else
	{
		minAtual++;
		segAtual = 0;
	}

	if (minAtual < 59)
	{
		minAtual++;
	}
	else
	{
		horaAtual++;
		minAtual = 0;
	}

	if (horaAtual < 23)
	{
		horaAtual++;
	}
	else
	{
		horaAtual = 0;
	}
}
