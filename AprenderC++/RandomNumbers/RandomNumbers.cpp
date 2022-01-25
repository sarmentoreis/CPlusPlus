#include <cstdlib>
#include <ctime>
#include <iostream>


using namespace std;
int main()
{
	srand((unsigned)time(0));
	int RandomNumber;

	for (int i = 0; i < 10; i++)
	{
		RandomNumber = (rand() % 35) + 1; // gera número randomico de 1 a 35.
		cout << RandomNumber << endl;
	}

	return 0;
}