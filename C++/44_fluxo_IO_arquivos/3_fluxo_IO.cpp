 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main(int argc, char *argv[])
{
	// abrir um arquivo para saída
	ofstream output("teste_2.txt");
	output <<  "Aprendendo C++\n";
	output << "Douglas dos Santos Gomes\n";
	return 0;
}