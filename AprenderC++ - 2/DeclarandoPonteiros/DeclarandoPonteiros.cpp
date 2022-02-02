#include <iostream>


int main()
{
	//nullptr � como se fosse um endere�o zero, n�o deixa o ponteiro com lixo de mem�ria.
	//Indica que ele n�o est� apontando para lugar algum...
	int* ptr = nullptr;
	int Numero = 101;
	std::cout << "Endereco de Numero: " << &Numero << std::endl;
	std::cout << "Endereco de ptr: " << &ptr << std::endl;

	ptr = &Numero;

	//Desreferenciamento
	*ptr = 200;

	std::cout << "Endereco de ptr: " << *ptr << std::endl;

	return 0;
}