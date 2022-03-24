#include <iostream>
#include <new>

int main()
{
	int Tamanho, i;
	int* Ponteiro;
	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "Quantos números você quer digitar? ";
	std::cin >> Tamanho;
	Ponteiro = new (std::nothrow) int[Tamanho]; //nothrow, and what happens when it is used is that
												//when a memory allocation fails, instead of throwing a bad_alloc
												//exception or terminating the program, the pointer returned by new
												//is a null pointer, and the program continues its execution normally.
	if (Ponteiro == nullptr)
	{
		std::cout << "Não foi possível alocar a memória";
	}
	else
	{
		for (i = 0; i < Tamanho; i++)
		{
			std::cout << "Digite um número: ";
			std::cin >> Ponteiro[i];
		}
		std::cout << "Você digitou: ";
		for (i = 0; i < Tamanho; i++)
		{
			std::cout << Ponteiro[i] << ", ";
		}
		std::cout << std::endl;
		delete[] Ponteiro; //Deleta da memória HEAP o vetor alocado.
	}
	return 0;
}