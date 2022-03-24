#include <iostream>

int main()
{
	int n = 10;

//label identificada pelos ':'
MinhaEtiqueta:
	std::cout << n << ", ";
	n--;
	if (n > 0) goto MinhaEtiqueta;
	std::cout << "Acabou!\n";

	return 0;
}