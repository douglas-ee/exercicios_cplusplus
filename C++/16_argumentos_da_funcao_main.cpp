#include <iostream>
using namespace std;

int main(int argc, char *argv[3])
{
    cout << "Qauntidade de argumentos:" << argc << endl;
    cout << "\nArgumentos passados: \n"
         << argv[0] << endl;

    for (int i = 0; i < argc; i++)
        cout << argv[i] << endl;

    return 0;
}