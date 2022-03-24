#include <iostream>
#include <new>

int main()
{
	int Tamanho, i;
	int* Ponteiro;
	setlocale(LC_ALL, "PORTUGUESE");
	std::cout << "Quantos n�meros voc� quer digitar? ";
	std::cin >> Tamanho;
	Ponteiro = new (std::nothrow) int[Tamanho]; //nothrow, and what happens when it is used is that
												//when a memory allocation fails, instead of throwing a bad_alloc
												//exception or terminating the program, the pointer returned by new
												//is a null pointer, and the program continues its execution normally.
	if (Ponteiro == nullptr)
	{
		std::cout << "N�o foi poss�vel alocar a mem�ria";
	}
	else
	{
		for (i = 0; i < Tamanho; i++)
		{
			std::cout << "Digite um n�mero: ";
			std::cin >> Ponteiro[i];
		}
		std::cout << "Voc� digitou: ";
		for (i = 0; i < Tamanho; i++)
		{
			std::cout << Ponteiro[i] << ", ";
		}
		std::cout << std::endl;
		delete[] Ponteiro; //Deleta da mem�ria HEAP o vetor alocado.
	}
	return 0;
}