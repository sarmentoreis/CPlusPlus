#include <iostream>

int main()
{
	int Numero{ 4096 };
	int* ptr;
	int* ptr2;
	ptr = &Numero;
	ptr2 = ptr;

	setlocale(LC_ALL, "portuguese");

	std::cout << "\nEndere�o contido dentro de ptr:  " << ptr << '\n';
	std::cout << "\nEndere�o contido dentro de ptr2: " << ptr2 << '\n';
	std::cout << "\nEndere�o de ptr na mem�ria RAM:  " << &ptr << '\n';
	std::cout << "\nEndere�o de ptr2 na mem�ria RAM: " << &ptr2 << '\n';

	*ptr2 = *ptr + 10;

	std::cout << "\nValor de Numero agora: " << Numero << '\n';


	return 0;
}