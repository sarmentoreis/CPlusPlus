#include <iostream>
#include <cmath>

int main()
{
	int Expoente;
	float Base, Resultado = 1;

	std::cout << "Digite a base: ";
	std::cin >> Base;
	std::cout << "\nDigite o expoente: ";
	std::cin >> Expoente;

	std::cout << Base << "^" << Expoente << " = ";

	while (Expoente != 0)
	{
		Resultado *= Base;
		Expoente--;
	}

	std::cout << Resultado;
	std::cout << '\n';

	//Usando biblioteca math
	std::cout << "\nPow 9^4: " << std::pow(9, 4) << '\n';

	return 0;
}