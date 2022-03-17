#include <iostream>
#include "Metodo.h"

int main()
{

	/*Ex 11:
	* Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz.
	  O resultado deve ser colocado na linha L3. Faça o mesmo com a multiplicação.
	*/

	int *Matriz[3];
	for (int i = 0; i < 3; i++)
	{
		Matriz[i] = new int[6];
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			Matriz[i][j] = rand() % 10;
		}
	}


	SomaMatriz(Matriz);

	std::cout << "---Matriz Somada---" << '\n';

	for (int i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			std::cout << "---#-Soma-#---\n\n";
		}
		for (int j = 0; j < 6; j++)
		{
			std::cout << "Matriz [" << i << "]" << "[" << j << "] - " << Matriz[i][j] << '\n';
		}
		std::cout << std::endl;
	}

	MultiplicaMatriz(Matriz);

	std::cout << "\n#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n";

	std::cout << "\n---Matriz Multiplicada---" << '\n';

	for (int i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			std::cout << "---#-Multiplicacao-#---\n\n";
		}
		for (int j = 0; j < 6; j++)
		{
			std::cout << "Matriz [" << i << "]" << "[" << j << "] - " << Matriz[i][j] << '\n';
		}
		std::cout << std::endl;
	}

	return 0;
}