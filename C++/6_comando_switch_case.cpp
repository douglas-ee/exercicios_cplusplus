#include <iostream>

using namespace std;

int main()
{
	int num;
	
	cin >> num;

	switch(num)
	{
	case 1:
		cout << "Escolheu o numero 1";
		break;
	case 2:
		cout << "Escolheu o numero 2";
		break;
	case 3:
		cout << "Escolheu o numero 3";
		break;
	default:
		cout << "Escolheu o numero errado";
		break;
	}
	
	return 0;
}
