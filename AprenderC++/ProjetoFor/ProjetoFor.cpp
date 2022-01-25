#include <iostream>


int main()
{

	int Soma = 0;

	for (int i=1; i <= 100; i++)
	{
		Soma += i;
	}

	std::cout << "A soma dos numeros de 1 a 100: " << Soma << std::endl;

	return 0;
}