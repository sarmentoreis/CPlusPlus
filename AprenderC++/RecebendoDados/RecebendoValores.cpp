#include <iostream>
#include <tchar.h>

int main()
{
	int Numero01, Numero02;
	int Soma;
	int Subtracao;
	int Multiplicacao;
	int Resto;
	float Divisao;

	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;
	Soma = Numero01 + Numero02;
	Subtracao = Numero01 - Numero02;
	Multiplicacao = Numero01 * Numero02;
	Divisao = static_cast<float>(Numero01) / Numero02;
	Resto = Numero01 % Numero02;

	std::cout << "\nA soma dos dois numeros: " << Soma << "\n";
	std::cout << "A subtração dos dois numeros: " << Subtracao << "\n";
	std::cout << "A multiplicação dos dois numeros: " << Multiplicacao << "\n";
	std::cout << "A divisão dos dois numeros: " << Divisao << "\n";
	std::cout << "O resto da divisão dos dois numeros: " << Resto << "\n";


	return 0;


}