#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

/*Aqui � o COMO ? Como as fun��es do arquivo.h ser�o implementadas.
* Nesse arquivo .cpp, � colocado a implementa��o de todas as fun��es do arquivo 
* .h relacionado.
*/

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
		

	} while (ProcessarEscolha(RetornarEscolha()) != 3);

}

int RetornarEscolha()
{
	int Escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> Escolha;
	return Escolha;
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1:
		std::cout << "\nMeia entrada comprada.\n" << std::endl;
		break;
	case 2:
		std::cout << "\nInteira entrada comprada.\n" << std::endl;
		break;
	case 3:
		std::cout << "\nSaindo menu tickets...\n" << std::endl;
		exit(0);
		break;
	default:
		std::cout << "\nOp��o inv�lida.\n" << std::endl;
		break;
	}

	return TipoEscolha;
}
