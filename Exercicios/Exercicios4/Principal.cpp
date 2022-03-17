#include <iostream>
#include "Metodos.h"

int main()
{
	/* Ex 5:
	* Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número.
	  Faça o mesmo para uma coluna. A matriz deve ser lida de teclado.
	*/

	int linhas,colunas,multiplicar;
	setlocale(LC_ALL, "PORTUGUESE");
	
	std::cout << "Entre com o número de linhas -> ";
	std::cin >> linhas;
	std::cout << "\nEntre com o número de colunas -> ";
	std::cin >> colunas;

	int** matrix = CriaMatriz(linhas, colunas);

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cout << "matrix [" << i << "]" << "[" << j << "] " << matrix[i][j] << '\n';
		}
	}

	std::cout << "\n\tDigite um número para multiplicar os valores da matriz -> ";
	std::cin >> multiplicar;
	std::cout << "\tCarregando...\n"<< std::endl;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			std::cout << "matrix [" << i << "]" << "[" << j << "] " << matrix[i][j] * multiplicar << '\n';
		}
	}


	return 0;
}