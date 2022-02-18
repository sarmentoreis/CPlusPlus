#include <iostream>

int main()
{
	int Numero{ 100 };
	int* Ponteiro1 = &Numero;

	setlocale(LC_ALL, "Portuguese");

	std::cout << "\nEndereço de Numero = " << &Numero;
	std::cout << "\nValor contido dentro de Ponteiro1 = " << Ponteiro1;
	std::cout << "\nEndereço que a variável Ponteiro1 está carregada na memória = " << &Ponteiro1;

	//Agora Ponteiro2 é um ponteiro para ponteiro e terá dentro dele o endereço de Ponteiro1
	int** Ponteiro2 = &Ponteiro1;

	std::cout << "\nValor contido dentro de Ponteiro2 = " << Ponteiro2;
	//Para colocar na tela o valor de Numero utilizando o Ponteiro2, usamos os dois asteriscos **.
	std::cout << "\nValor de Numero via Ponteiro2 = " << **Ponteiro2 << std::endl;

	return 0;
}