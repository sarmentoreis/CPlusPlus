#include "Funcao.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

int GeraNumero()
{
	srand(time(0));
	int Num = rand() % 100 + 0;
	return Num;
}

void VerificaNumero(int numero, int chute)
{
	if (chute < numero)
	{
		std::cout << "\nÉ um número maior que " << chute << '\n';
	}
	else if (chute > numero)
	{
		std::cout << "\nÉ um número menor que " << chute << '\n';
	}
	else
	{
		std::cout << "\nParabéns! Você acertou, o número correto era " << chute << '\n';
	}
}
