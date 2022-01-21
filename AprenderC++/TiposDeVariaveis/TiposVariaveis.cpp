#include <iostream>
#include <tchar.h>
#include <iomanip>

int main()
{

	int Numero;
	float Numero2;
	double Numero3;
	Numero = 45;
	Numero2 = 55.56f;
	Numero3 = 45345.904555;

	char Caractere = '3';
	char Caractere2 = 'k';
	bool bAchou = 1;

	//Fun��o que configura o console windows para mostrar acentos.
	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da vari�vel n�mero: " << sizeof(Numero) << "bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero << "\n\n";
	
	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da vari�vel n�mero2: " << sizeof(Numero2) << "bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero2 << "\n\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da vari�vel n�mero3: " << sizeof(Numero3) << "bytes" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << &Numero3 << "\n\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da vari�vel Caractere: " << sizeof(Caractere) << "byte" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << (void *)&Caractere << "\n\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da vari�vel Caractere2: " << sizeof(Caractere2) << "byte" << std::endl;
	std::cout << "Endere�o carregado na mem�ria: " << (void *)&Caractere2 << "\n\n";

	//Qualquer coisa diferente de 0 � TRUE! 
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "teste";
	std::cout << "Valor de bAchou: " << bAchou << "\n";


	int NumComputadores = 100;
	int SerialComputadores = 11111;

	std::cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$";
	std::cout << "\n\tNumComputadores = " << NumComputadores;  //   \t -> Tabula��o.
	std::cout << "\n\tSerialComputadores = " << SerialComputadores;
	std::cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;


	system("PAUSE");
	return 0;
}