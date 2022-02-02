#include <iostream>
using namespace std;

//class aninhada B emm A
class A
{
public:
	class B
	{
	private:
		int var;

	public:
		B(int var)
		{
			this->var = var;
		}

		int getVar()
		{
			return var;
		}
	};
};

int main(int argc, char *argv[])
{
	A::B obj(10);

	cout << obj.getVar() << endl;

	return 0;
}
