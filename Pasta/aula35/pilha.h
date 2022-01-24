class Pilha
{
private:
	int * vet;
	int max_tam;
	int topo;
public:
	Pilha();
	~Pilha();
	void empilhar(int e);
	void desempilhar();
	int getTopo();
	int vazia();
};