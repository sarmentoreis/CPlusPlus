#include <iostream>
#include <tchar.h>
#include <iomanip> // para formatar casas decimais
#include "MostrarCarrinho.h"

int main()
{


	_tsetlocale(LC_ALL, _T("portuguese"));

	float MeiaEntrada = 0.0;
	float InteiraEntrada = 0.0;
	float Total = 0.0;
	char Escolha;

	do
	{
		std::cout << "\nMENU DE OPÇÕES" << "\n";
		std::cout << "--------------" << "\n";

		std::cout << std::endl;

		std::cout << "Selecione [1] para COMPRAR 01\t\tMEIA ENTRADA\t(+R$ 10,50)" << "\n";
		std::cout << "Selecione [2] para COMPRAR 01\t\tENTRADA INTERA\t(+R$ 21,00)" << "\n";
		std::cout << "Selecione [3] para RETIRAR 01\t\tMEIA ENTRADA\t(-R$ 10,50)" << "\n";
		std::cout << "Selecione [4] para RETIRAR 01\t\tENTRADA INTEIRA\t(-R$ 21,00)" << "\n";
		std::cout << "Selecione [5] para ZERAR o carrinho" << "\n";
		std::cout << "Selecione [6] para MOSTRAR o carrinho" << "\n";
		std::cout << "Selecione [7] para SAIR" << "\n";

		std::cout << std::endl;

		std::cout << std::endl;

		std::cout << "Entre com o número para realizar as compras: ";
		std::cin >> Escolha;

		switch (Escolha)
		{

		case '1':

			system("CLS");
			std::cout << "\nMEIA ENTRADA adicionada!" << "\n";
			MeiaEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;

		case '2':

			system("CLS");
			std::cout << "\nENTRADA INTEIRA adicionada!" << "\n";
			InteiraEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;

		case'3':

			if (MeiaEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			}

			else
			{
				system("CLS");
				std::cout << "\nMEIA ENTRADA retirada!" << "\n";
				MeiaEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}

		case'4':

			if (InteiraEntrada == 0)
			{
				std::cout << "\n[ERRO]: Impossível retirar entrada (0 compradas)" << "\n";
				break;
			}

			else
			{
				system("CLS");
				std::cout << "\nENTRADA INTEIRA retirada!" << "\n";
				InteiraEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}

		case'5':

			system("CLS");
			std::cout << "\nCARRINHO ZERADO!" << "\n";
			MeiaEntrada = 0;
			InteiraEntrada = 0;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;

		case'6':

			system("CLS");
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;

		case'7':

			std::cout << "\nFechando o carrinho..." << "\n";
			break;

		default:

			std::cout << "\n[ERRO]: Opção inválida! Verifique o MENU de opções!" << "\n";
			break;
		}

	} while (Escolha != '7');

	return 0;

}