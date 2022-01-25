#include <iostream>
#include <locale.h>


void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()
{
	ExibirMenu();
	system("PAUSE");
	return 0;
}

void ExibirMenu()
{
	int Escolha = 0;
	setlocale(LC_ALL, "portuguese");
	do
	{
		std::cout << "***Tickets Cinema***" << std::endl;
		std::cout << "1 - Para meia entrada\n";
		std::cout << "2 - Para inteira\n";
		std::cout << "3 - Sair";
		ProcessarEscolha(RetornarEscolha());

	} while (Escolha != 3);

}

int RetornarEscolha()
{
	int Escolha = 0;
	std::cout << "\nEscolha sua opção: ";
	std::cin >> Escolha;
	return Escolha;
}

void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
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
}
