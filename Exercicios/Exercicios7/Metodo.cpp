#include "Metodo.h"

void SomaMatriz(int *matriz[3])
{

	for (int j = 0; j < 6; j++)
	{
		matriz[2][j] = (matriz[0][j] + matriz[1][j]);
	}
	
}

void MultiplicaMatriz(int* matriz[3])
{
	for (int j = 0; j < 6; j++)
	{
		matriz[2][j] = (matriz[0][j] * matriz[1][j]);
	}

}
