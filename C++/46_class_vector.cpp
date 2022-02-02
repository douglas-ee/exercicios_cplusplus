#include <iostream>
#include <vector>

using namespace std;

class Ponto
{
public:
	int x, y;

	Ponto(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

int main(int argc, char *argv[])
{
	/*
		//exemplo 1
		vector<int> v;

		v.push_back(20);
		v.push_back(30);
		v.push_back(40);

		int tam = v.size();
		for(int i = 0; i < tam ; i++)
			cout << v[i] << endl;

		for(unsigned int i = 0; i < v.size(); i++)
			cout << v[i] << endl;

		//exemplo 2
		vector<int> v(3);
		v[0] = 10;
		v[1] = 20;
		v[2] = 30;

		vector<int>::iterator it;

		cout << "primeiro elemento: " << *v.begin() << endl;
		cout << "primeiro elemento: " << --*v.end() << endl;

		for(it = v.begin(); it != v.end(); it++)
			cout << *it << endl;

		//exemplo 3
		vector<int> v(3);

			vector<int>::reverse_iterator rit;
		int i = 0;
		for(rit = v.rbegin(); rit != v.rend(); rit++)
			*rit = ++i;

		vector<int>::iterator it;
		for(it = v.begin(); it != v.end(); it++)
			cout << *it << endl;

		//exemplo 4
		vector<int> v;
		if(v.empty())
			cout << "vetor vazio" << endl;
		else
			cout << "vetor NAO vazio" << endl;

		v.push_back(10);
		if(v.empty())
			cout << "vetor vazio" << endl;
		else
			cout << "vetor NAO vazio" << endl;

		//exemplo 5
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);

		while(!v.empty())
			v.pop_back();

		if(v.empty())
			cout << "vetor vazio" << endl;
		else
			cout << "vetor NAO vazio" << endl;
		//exemplo 5
		vector<int> v(3);
		v[0] = 1;
		v[1] = 2;
		v[2] = 3;

		cout << v.back() << endl;
		cout << v.front() << endl;
		cout << v.at(1) << endl;

		//exemplo 6
		vector<int> v(3);
		vector<int>::iterator it = v.begin();

		v.insert(it + 2, 4);
		for(unsigned int i = 0; i < v.size(); i++)
			cout << v[i] << endl;

		//exemplo 7
		vector<int> v(3);
		v[0] = 1;
		v[1] = 2;
		v[2] = 3;
		v.erase(v.end() - 1);
		for(unsigned int i = 0; i < v.size(); i++)
			cout << v[i] << endl;

		//exemplo 8
		vector<int> a(2, 20);
		vector<int> b(3, 10);

		a.swap(b);

		for(unsigned int i = 0; i < a.size(); i++)
			cout << a[i] << endl;
		for(unsigned int i = 0; i < b.size(); i++)
			cout << b[i] << endl;

		//exemplo 9
		vector<int> v(3, 10);

		cout << v.size() << endl;
		v.clear();
		cout << v.size() << endl;
	*/

	//exemplo 10
	vector<Ponto*> vet;
	vector<Ponto*>::iterator it;
	Ponto* p1 = new Ponto(1, 2);
	Ponto* p2 = new Ponto(3, 4);

	vet.push_back(p1);
	vet.push_back(p2);

	for(it = vet.begin(); it != vet.end(); it++)
		cout << "(" << (*it)->x << ", " << (*it)->y << ")\n";

	return 0;
}
