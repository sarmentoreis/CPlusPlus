#include <iostream>

int main()
{

	int Num = 0;

	// 1 a 50
	while (Num <= 50)
	{
		std::cout << Num << std::endl;
		Num++;
	}

	Num = 0;

	//1 a 50 (pares)
	while (Num <= 50)
	{
		if (Num % 2 == 0)
		{
			std::cout << Num << " ";
			Num++;
		}
		Num++;
	}

	Num = 0;
	std::cout << std::endl;

	//1 a 50 (impares)
	while (Num <= 50)
	{
		if (Num % 2 != 0)
		{
			std::cout << Num << " ";
			Num++;
		}
		Num++;
	}

	return 0;
}