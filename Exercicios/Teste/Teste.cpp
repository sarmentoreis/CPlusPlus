#include <iostream>

int main()
{

	int Numero;

	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "Digite um n�mero: ";
	std::cin >> Numero;
	std::cout << "Numero digitado foi: " << Numero << '\n';

	if ((Numero % 2) == 0)
	{
		std::cout << "\nO n�mero � par.";
	}
	else
	{
		std::cout << "\nO n�mero � �mpar.";
	}

	return 0;
}