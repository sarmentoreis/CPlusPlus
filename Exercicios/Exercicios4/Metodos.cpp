#include "Metodos.h"
#include <iostream>


int** CriaMatriz(int linha, int coluna)
{

	int** array2D = 0;
	array2D = new int*[linha];

	for (int i = 0; i < linha; i++)
	{
		array2D[i] = new int[coluna];

		for (int j = 0; j < coluna; j++)
		{
			array2D[i][j] = rand() % 10;
		}
	}

	return array2D;

}
