#include <iostream>
#include <vector>

int main()
{
	int linha, coluna;

	std::cout << "Entre com a qtd de linha: ";
	std::cin >> linha;
	std::cout << "Entre com a qtd de coluna: ";
	std::cin >> coluna;

	std::vector<std::vector<int>> matrix(linha, std::vector<int>(coluna, 5));

	int i{ 0 };
	int j{ 0 };

	for (auto& row : matrix)
	{
		j = 0;
		for (auto& column : row)
		{
			std::cout << "matrix [" << i << "]" << "[" << j << "] -> ";
			std::cout << column << std::endl;
			j++;
		}
		i++;
	}

	return 0;
}