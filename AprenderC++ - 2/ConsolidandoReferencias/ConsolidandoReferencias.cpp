#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a referência não pode ficar sem ser atribuida logo na sua criação.
	int& RefNum{ Numero2 };
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da referência, sem precisar do *.
	//&RefNum = Numero;
	//Comando acima não permitido, pois referência só pode ser atribuida uma única vez.

	int* ptr{ &Numero };
	*ptr = 4048;

	std::cout << "Valor de numero: " << *ptr << '\n';
	ptr = &Numero2;
	*ptr = Numero + 2000;
	
	std::cout << "Valor de numero2: " << *ptr << '\n';

	return 0;
}