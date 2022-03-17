#include <iostream>
#include "Pessoas.h"
#include <iomanip>

int main()
{

	Pessoa pessoas[3];

	std::cout << "\t*- Cadastro de pessoas -*" << '\n';

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Pessoa - " << (i + 1) << '\n';
		std::cout << "Digite o nome: ";
		std::cin >> pessoas[i].Nome;

		std::cout << "Digite a idade: ";
		std::cin >> pessoas[i].Idade;

		std::cout << "Digite o peso: ";
		std::cin >> pessoas[i].Peso;

		std::cout << "Digite a altura: ";
		std::cin >> pessoas[i].Altura;

		std::cout << std::endl;
	}

	system("CLS");

	for (int i = 0; i < 3; i++)
	{
		ConsultaDados(pessoas[i]);
	}

	return 0;
}