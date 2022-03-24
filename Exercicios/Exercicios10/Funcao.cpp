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
		std::cout << "\n� um n�mero maior que " << chute << '\n';
	}
	else if (chute > numero)
	{
		std::cout << "\n� um n�mero menor que " << chute << '\n';
	}
	else
	{
		std::cout << "\nParab�ns! Voc� acertou, o n�mero correto era " << chute << '\n';
	}
}
