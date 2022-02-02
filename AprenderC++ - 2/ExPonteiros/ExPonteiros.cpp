#include <iostream>
#include <tchar.h>

int main()
{

	_tsetlocale(LC_ALL, _T("portuguese"));
	int Numero{ 234 };
	int* Ponteiro = nullptr;
	Ponteiro = &Numero;
	*Ponteiro = 1456;

	std::cout << "Valor de número usando ponteiro: " << *Ponteiro << '\n';
	std::cout << "Endereço na memória RAM (Numero): " << &Numero << '\n';
	std::cout << "Endereço na memória RAM (Ponteiro): " << &Ponteiro << '\n';

	int* OutroPtr{ Ponteiro };
	*Ponteiro += 200;

	std::cout << "Valor de OutroPtr: " << *OutroPtr << '\n';

	return 0;
}