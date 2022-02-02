#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a refer�ncia n�o pode ficar sem ser atribuida logo na sua cria��o.
	int& RefNum{ Numero2 };
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da refer�ncia, sem precisar do *.
	//&RefNum = Numero;
	//Comando acima n�o permitido, pois refer�ncia s� pode ser atribuida uma �nica vez.

	int* ptr{ &Numero };
	*ptr = 4048;

	std::cout << "Valor de numero: " << *ptr << '\n';
	ptr = &Numero2;
	*ptr = Numero + 2000;
	
	std::cout << "Valor de numero2: " << *ptr << '\n';

	return 0;
}