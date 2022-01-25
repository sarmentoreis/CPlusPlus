#include <iostream>
#include <locale.h>

int main()
{
	int Escolha = 0;

	do
	{
		setlocale(LC_ALL, "portuguese");
		std::cout << "***Tickets Cinema***" << std::endl;
		std::cout << "1 - Para meia entrada\n";
		std::cout << "2 - Para inteira\n";
		std::cout << "3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> Escolha;
		
		switch (Escolha)
		{
		case 1:
			std::cout << "\nMeia entrada comprada.\n";
			break;
		case 2:
			std::cout << "\nInteira entrada comprada.\n";
			break;
		case 3:
			std::cout << "\nSaindo menu tickets...\n";
			break;
		default:
			std::cout << "\nOpção inválida.\n";
			system("PAUSE");
			break;
		}


	} while (Escolha != 3);

	return 0;
}