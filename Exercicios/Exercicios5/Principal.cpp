#include <iostream>
#include <vector>

int main()
{

	/* Ex 6:
	* Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.
	*/

	int linha, coluna, num;

	std::cout << "Qtd de linhas: ";
	std::cin >> linha;
	std::cout << "Qtd de colunas: ";
	std::cin >> coluna;

	std::vector<std::vector<int>> Matriz(linha, std::vector<int>(coluna));

	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			std::cout << "Matriz [" << i << "]" << "[" << j << "] ";
			std::cin >> num;
			Matriz[i][j] = num;
		}
	}

	std::cout << "\n\t*-Matriz carregada-*\n" << std::endl;

	for (int i = 0; i < linha; i++)
	{
		for (int j = 0; j < coluna; j++)
		{
			std::cout << "Matriz [" << i << "]" << "[" << j << "] " << Matriz[i][j] << '\n';
		}
	}

	std::cout << "\n\t*-Matriz transposta-*\n" << std::endl;

	//Invertendo valores de linha/coluna da matriz 1. 
	//Coluna = tamanho da linha
	//Linha = tamanho da colina
	std::vector<std::vector<int>> Matriz2(coluna, std::vector<int>(linha));

	for (int i = 0; i < coluna; i++)
	{
		for (int j = 0; j < linha; j++)
		{
			Matriz2[i][j] = Matriz[j][i];
		}
	}

	for (int i = 0; i < coluna; i++)
	{
		for (int j = 0; j < linha; j++)
		{
			std::cout << "Matriz [" << i << "]" << "[" << j << "] " << Matriz2[i][j] << '\n';
		}
	}
	
	return 0;
}