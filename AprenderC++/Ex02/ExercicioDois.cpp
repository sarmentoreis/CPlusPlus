#include <iostream>
#include <tchar.h>

int main()
{

	float Num1, Num2, Num3;
	float Media{ 0.0 };
	char Resposta;

	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "###--Exerc�cio 2--###" << std::endl;
	
	do
	{
		std::cout << "\nEntre com o primeiro n�mero: ";
		std::cin >> Num1;
		std::cout << "Entre com o segundo n�mero: ";
		std::cin >> Num2;
		std::cout << "Entre com o terceiro n�mero: ";
		std::cin >> Num3;

		Media = (Num1 + Num2 + Num3) / 3;

		std::cout << "A m�dia aritm�tica � -> " << Media << std::endl;

		std::cout << "\nDeseja calcular outra m�dia aritm�tica? (Responda S para SIM ou N para N�O: " << std::endl;
		std::cin >> Resposta;
		
	} while (Resposta == 'S' || Resposta == 's');
	

	std::cout << "\n\nSaindo...\n\n";
	return 0;
}