#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char *argv[])
{
	deque<int> fila;
	
	cout << "Antes de inserir os elementos: ";
	
	if(fila.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";
	
	// inserir elementos ao final da fila
	fila.push_back(10);
	fila.push_back(20);
	// inserir elemento no início da fila
	fila.push_front(30);
	// fila: 30 10 20
	
	cout << "\nDepois de inserir os elementos: ";
	
	if(fila.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";
	
	cout << "\nMostrando os elementos da fila: ";
	
	deque<int>::iterator it = fila.begin();
	while(it != fila.end())
		cout << *it++ << " ";
	
	cout << "\n";
	
	// limpar toda a fila
	fila.clear();
	
	cout << "\nDepois de limpar (clear) a fila: ";
	if(fila.empty())
		cout << "Fila vazia!!\n";
	else
		cout << "Fila NAO vazia!!\n";
	
	// inserir elementos
	fila.push_front(10);
	fila.push_front(20);
	fila.push_back(30);
	// fila: 20 10 30
	
	// removendo o segundo elemento
	fila.erase(fila.begin() + 1);
	
	cout << "\nMostrando os elementos da fila: ";
	it = fila.begin();
	while(it != fila.end())
		cout << *it++ << " ";
	
	cout << "\n\nElemento da frente: " << fila.front();
	cout << "\n\nUltimo elemento: " << fila.back();
	
	it = fila.begin() + 1;
	fila.insert(it, 10);
	
	cout << "\n\nMostrando os elementos: ";
	
	it = fila.begin();
	while(it != fila.end())
		cout << *it++ << " ";
	
	// remover do início
	fila.pop_front();
	// remover do final
	fila.pop_back();
	
	cout << "\n\nTamanho da fila: " << fila.size() << endl;
	
	return 0;
}