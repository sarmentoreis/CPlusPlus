#include <iostream>
#include <tchar.h>
#include <iomanip>


int main()
{

	int Inteiro = 77;
	float Real = 123.4f;
	double Flut = 12324.44225;
	char Caractere = 'L';


	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "##### - Exerc�cio 1 - #####\n\n";

	std::cout << "Valor de Inteiro -> " << Inteiro << "\n";
	std::cout << "Tamanho de Inteiro -> " << sizeof(Inteiro) << "\n";
	std::cout << "Endere�o de Inteiro -> " << &Inteiro << "\n\n";

	std::cout << "Valor de Real -> " << Real << "\n";
	std::cout << "Tamanho de Real -> " << sizeof(Real) << "\n";
	std::cout << "Endere�o de Real -> " << &Real << "\n\n";

	std::cout << "Valor de Flut -> " << std::setprecision(10) << Flut << "\n";
	std::cout << "Tamanho de Flut -> " << sizeof(Flut) << "\n";
	std::cout << "Endere�o de Flut -> " << &Flut << "\n\n";

	std::cout << "Valor de Caractere -> " << Caractere << "\n";
	std::cout << "Tamanho de Caractere -> " << sizeof(Caractere) << "\n";
	std::cout << "Endere�o de Caractere -> " << (void *)&Caractere << "\n\n";




	return 0;
}