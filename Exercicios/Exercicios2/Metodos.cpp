#include "Metodos.h"
#include <iostream>

float CalculaMedia(float nota1, float nota2, float nota3, float me)
{
	float Media = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 7;

	return Media;
}

void MostraSituacao(float media)
{
	if (media >= 9)
	{
		std::cout << "\n\tMédia final: A\n" << std::endl;
	}
	else if (media >= 7.5 && media < 9)
	{
		std::cout << "\n\tMédia final: B\n" << std::endl;
	}
	else if (media >= 6 && media < 7.5)
	{
		std::cout << "\n\tMédia final: C\n" << std::endl;
	}
	else if (media >= 4 && media < 6)
	{
		std::cout << "\n\tMédia final: D\n" << std::endl;
	}
	else if (media < 4)
	{
		std::cout << "\n\tMédia final: E";
	}
}

void ApresentaSaida(int selecao[],int length)
{
	
	for (int i = 0; i < length; i++)
	{
		std::cout << '\n';
		if (selecao[i] == 9)
		{
			std::cout << " 1 2 3 4 5 6 7 8 9";
		}
		else if (selecao[i] == 7)
		{
			std::cout << "   2 3 4 5 6 7 8 ";
		}
		else if (selecao[i] == 5)
		{
			std::cout << "     3 4 5 6 7  ";

		}
		else if (selecao[i] == 3)
		{
			std::cout << "       4 5 6   ";
		}
		else if (selecao[i] == 1)
		{
			std::cout << "         5    ";
		}
	}

	std::cout << '\n' << std::endl;
}
