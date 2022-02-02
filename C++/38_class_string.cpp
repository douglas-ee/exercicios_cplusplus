#include <iostream>
#include <string>

using namespace std;

void showMessage(const char* str)
{
	cout << str << endl;
}

int main(int argc, char *argv[])
{
	string str = "Douglas";

	cout << "Nome: " << str << endl;
	cout << "Tamanho: " << str.length() << endl;
	cout << str.at(1) << endl;
	cout << str.append(" dos Santo") << endl;
	str.push_back('s');
	cout << "Nome completo: " << str << endl;
	cout << str.insert(str.size(), " Gomes") << endl;
	cout << str.erase(7, str.size()) << endl;

	//str.clear();
	if(str.empty())
		cout << "String vazia!!" << endl;
	else
		cout << "String NAO vazia!!" << endl;

	showMessage(str.c_str());
	cout << str.replace(4, 7, "_ee") << endl;

	size_t achou = str.find("Doug");
	if(achou != string::npos)
		cout << "Achou a substring!!" << endl;
	else
		cout << "Substring nao encontrada" << endl;

	string my_str;
	cout << "Digite seu nome: ";
	getline(cin, my_str);
	cout << "Nome digitado: " << my_str << endl;

	str += " Gomes";
	cout << "Nome completo: " << str << endl;

	return 0;
}
