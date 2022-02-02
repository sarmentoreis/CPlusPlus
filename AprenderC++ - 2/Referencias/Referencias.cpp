#include <iostream>

int main()
{

	int Numero{ 1024 };
	char Letra{ 'A' };
	int& Ref = Numero;

	std::cout << "Valor de numero usando Ref: " << Ref << '\n';
	std::cout << "Valor endereco de Numero: " << &Numero << '\n';
	std::cout << "Valor endereco de Ref: " << &Ref << '\n';

	int* ptr{ &Numero };
	std::cout << "Valor endereco de ptr na RAM: " << &ptr << '\n';
	system("PAUSE");
	return 0;
}