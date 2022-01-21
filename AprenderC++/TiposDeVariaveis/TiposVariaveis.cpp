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

	//Função que configura o console windows para mostrar acentos.
	_tsetlocale(LC_ALL, _T("portuguese"));

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variável número: " << sizeof(Numero) << "bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero << "\n\n";
	
	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variável número2: " << sizeof(Numero2) << "bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero2 << "\n\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variável número3: " << sizeof(Numero3) << "bytes" << std::endl;
	std::cout << "Endereço carregado na memória: " << &Numero3 << "\n\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da variável Caractere: " << sizeof(Caractere) << "byte" << std::endl;
	std::cout << "Endereço carregado na memória: " << (void *)&Caractere << "\n\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variável Caractere2: " << sizeof(Caractere2) << "byte" << std::endl;
	std::cout << "Endereço carregado na memória: " << (void *)&Caractere2 << "\n\n";

	//Qualquer coisa diferente de 0 é TRUE! 
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
	std::cout << "\n\tNumComputadores = " << NumComputadores;  //   \t -> Tabulação.
	std::cout << "\n\tSerialComputadores = " << SerialComputadores;
	std::cout << "\n$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;


	system("PAUSE");
	return 0;
}