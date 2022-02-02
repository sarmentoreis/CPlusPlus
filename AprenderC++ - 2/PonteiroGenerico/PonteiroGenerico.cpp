#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };

	//Tipo void(gen�rico) significa que ele ainda n�o tem um tipo que possa apontar.
	void* ptrG;
	ptrG = &Letra;

	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << '\n';
	//Primeiro � feito o cast e depois coloca o sinal de desreferenciamento.
	//*(cast para tipo desejado *)NomePonteiroGenerico

	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG = " << *(int*)ptrG << '\n';


	return 0;
}