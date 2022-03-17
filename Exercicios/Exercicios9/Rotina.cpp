#include "Rotina.h"
#include <iostream>

void DeleteChar(char* VetorChar, int Pos)
{
	if (Pos == 0)
	{
		VetorChar[Pos] = '*';
	}
	else
	{
		VetorChar[Pos - 1] = '*';
	}
	
}

void PercorreVetor(char VetorChar[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << VetorChar[i] << " ";
	}
}

void InsereChar(char* VetorChar, int Pos, char NovoChar)
{
	if (Pos == 0)
	{
		VetorChar[Pos] = NovoChar;
	}
	else
	{
		VetorChar[Pos - 1] = NovoChar;
	}
}
