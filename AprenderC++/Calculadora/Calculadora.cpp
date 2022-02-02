#include <iostream>
#include "Matematica.h"

int main()
{
	float Num1, Num2;

	setlocale(LC_ALL, "portuguese");

	std::cout << "Digite o primeiro numero: " << '\n';
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: " << '\n';
	std::cin >> Num2;

	std::cout << "\n*** Resultado das opera��es ***\n";
	std::cout << Num1 << " e " << Num2 << '\n' << std::endl;
	std::cout << "Adi��o: " << Adicao(Num1, Num2) << std::endl;
	std::cout << "Subtraca��o: " << Subtracao(Num1, Num2) << std::endl;
	std::cout << "Multiplica��o: " << Multiplicacao(Num1, Num2) << std::endl;
	std::cout << "Divis�o: " << Divisao(Num1, Num2) << std::endl;
	std::cout << "Pot�ncia: " << Potencia(Num1, Num2) << std::endl;

	std::cout << "Digite um numero para ver sua raiz quadrada: \n";
	std::cin >> Num1;
	std::cout << "Raiz quadrada de " << Num1 << " � " << Raiz(Num1) << std::endl;
	std::cout << std::endl;

	return 0;
}
