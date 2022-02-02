//declarando class pilha
class Pilha
{
private:
	int * vet;
	int max_tam;
	int topo;
public:
	//protitipos das funcoes e metodos
	Pilha();
	~Pilha();
	void empilhar(int e);
	void desempilhar();
	int getTopo();
	int vazia();
};
