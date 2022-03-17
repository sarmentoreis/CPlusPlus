#include <iostream>
#include <string>


int main()
{
	/*Ex 1:
	  Crie um progama capaz de ler dois nomes de pessoas e imprimi-los em ordem alfab�tica.
	  Fa�a isto com string de C e de C++
	*/

	std::string Nome1;
	std::string Nome2;

	setlocale(LC_ALL, "PORTUGUESE");

	std::cout << "Entre com o primeiro nome -> ";
	std::cin >> Nome1;
	std::cout << "Entre com o segundo nome -> ";
	std::cin >> Nome2;

	if (Nome1 < Nome2)
	{
		std::cout << "1� " << Nome1 << '\n';
		std::cout << "2� " << Nome2 << '\n';
 	}
	else
	{
		std::cout << "1� " << Nome2 << '\n';
		std::cout << "2� " << Nome1 << '\n';
	}

	char last1 = Nome1.back();
	char last2 = Nome2.back();

	if (last1 < last2)
	{
		std::cout << "�ltima letra em ordem alfab�tica 1� -> " << Nome1 << '\n';
		std::cout << "�ltima letra em ordem alfab�tica 2� -> " << Nome2 << '\n';
	}
	else
	{
		std::cout << "�ltima letra em ordem alfab�tica 1� -> " << Nome2 << '\n';
		std::cout << "�ltima letra em ordem alfab�tica 2� -> " << Nome1 << '\n';
	}

	return 0;
}