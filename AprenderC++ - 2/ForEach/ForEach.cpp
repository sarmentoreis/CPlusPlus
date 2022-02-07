#include <iostream>


int main()
{

	int Anos[]{ 1998,2011,2014,2017,2020 };

	//"Auto" o compilador deduz automaticamente que o conteúdo do vetor trata-se do tipo int, implicitamente.
	for (auto Ano : Anos)
	{
		std::cout << Ano << " ";
	}
	std::cout << std::endl;

	return 0;
}