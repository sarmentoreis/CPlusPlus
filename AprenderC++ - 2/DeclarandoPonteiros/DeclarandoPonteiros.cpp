#include <iostream>


int main()
{
	//nullptr é como se fosse um endereço zero, não deixa o ponteiro com lixo de memória.
	//Indica que ele não está apontando para lugar algum...
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