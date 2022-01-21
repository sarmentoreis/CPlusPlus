#include <iostream>
#define NUM_VIDAS_ 10

int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas = NUM_VIDAS - 1;
	int _TotalDeVidas = NUM_VIDAS_ - 1;

	std::cout << "Total de vidas: " << TotalDeVidas << std::endl;
	std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << std::endl;
	std::cout << "Endereco de memoria de NUM_VIDAS: " << &NUM_VIDAS << std::endl;

	std::cout << "\nTotal de vidas (define): " << _TotalDeVidas << std::endl;
	std::cout << "Valor constante NUM_VIDAS_: " << NUM_VIDAS_ << std::endl;

	return 0;
}