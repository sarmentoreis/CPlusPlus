#include <iostream>
#include <vector>

int main()
{
	std::vector<int> Vetor{ 7,6,9 };

	std::cout << "Elementos do vetor = { ";
	
	for (int Elementos : Vetor)
	{
		std::cout << Elementos << " ";
	}

	std::cout << "}";

	std::cout << std::endl << '\n';

	Vetor.push_back(80);
	Vetor.push_back(55);

	std::cout << "Elementos do vetor = { ";

	for (int Elementos : Vetor)
	{
		std::cout << Elementos << " ";
	}

	std::cout << "}";

	std::cout << std::endl << '\n';


	return 0;
}