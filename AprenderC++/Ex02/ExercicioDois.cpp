#include <iostream>
#include <tchar.h>

int main()
{

	float Num1, Num2, Num3;
	float Media{ 0.0 };
	char Resposta;

	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "###--Exercício 2--###" << std::endl;
	
	do
	{
		std::cout << "\nEntre com o primeiro número: ";
		std::cin >> Num1;
		std::cout << "Entre com o segundo número: ";
		std::cin >> Num2;
		std::cout << "Entre com o terceiro número: ";
		std::cin >> Num3;

		Media = (Num1 + Num2 + Num3) / 3;

		std::cout << "A média aritmética é -> " << Media << std::endl;

		std::cout << "\nDeseja calcular outra média aritmética? (Responda S para SIM ou N para NÃO: " << std::endl;
		std::cin >> Resposta;
		
	} while (Resposta == 'S' || Resposta == 's');
	

	std::cout << "\n\nSaindo...\n\n";
	return 0;
}