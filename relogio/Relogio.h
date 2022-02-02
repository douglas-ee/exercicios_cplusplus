#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio
{
private:
	int hora;
	int minuto;
	int segundo;
	int horaAtual;
	int minAtual;
	int segAtual;

public:
	Relogio();
	void SetHora(int, int, int);
	void Atualiza_segundo();
	void GetHora(int *, int *, int *);
};

#endif
