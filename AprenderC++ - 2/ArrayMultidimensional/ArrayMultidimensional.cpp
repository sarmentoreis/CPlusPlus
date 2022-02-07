#include <iostream>
#include <array>

int main()
{
	int Matriz[5][5]{};
	

	int Tamanho = std::size(Matriz);

	for (int i = 0; i < Tamanho ; i++)
	{
		for (int j = 0; j < Tamanho; j++)
		{

			if (i == j)
			{
				Matriz[i][j] = 0;
			}
			else if (i < j)
			{
				Matriz[i][j] = 1;
			}
			else if (i > j)
			{
				Matriz[i][j] = -1;
			}

			//Ajuste estético do -1.
			if (Matriz[i][j] == -1)
			{
				std::cout << " " << Matriz[i][j];
			}
			else
			{
				std::cout << " " << Matriz[i][j] << " ";
			}
			
		}
		std::cout << std::endl;
	}
	std::cout << std::endl << '\n';

	return 0;
}