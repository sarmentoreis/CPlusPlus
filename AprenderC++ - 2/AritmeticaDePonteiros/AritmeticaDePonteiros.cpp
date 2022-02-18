#include <iostream>

int main()
{
	int Vetor[]{ 1,23,-78,900,234 };
	int* ptr;

	//Nesse momento, ptr aponta para o endereço do Vetor.
	ptr = Vetor;

	for (int i = 0; i < 5; i++)
	{

		std::cout << "Vetor[" << i << "] Endereco: " << &Vetor[i] << " Valor: " << Vetor[i] << '\n';

	}
	std::cout << "\n*** Enderecos com aritmetica de ponteiros***\n";
	std::cout << "Valor contido em ptr: " << ptr << '\n';
	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << '\n';
	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << '\n';
	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << '\n';
	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << '\n';
	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << '\n';


	return 0;
}