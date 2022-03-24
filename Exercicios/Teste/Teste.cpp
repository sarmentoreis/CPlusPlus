#include <iostream>

int main()
{

	int Numero;

	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "Digite um número: ";
	std::cin >> Numero;
	std::cout << "Numero digitado foi: " << Numero << '\n';

	if ((Numero % 2) == 0)
	{
		std::cout << "\nO número é par.";
	}
	else
	{
		std::cout << "\nO número é ímpar.";
	}

	return 0;
}