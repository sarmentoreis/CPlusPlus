#include <iostream>

int main()
{
	int Numero{ 100 };
	int* Ponteiro1 = &Numero;

	setlocale(LC_ALL, "Portuguese");

	std::cout << "\nEndere�o de Numero = " << &Numero;
	std::cout << "\nValor contido dentro de Ponteiro1 = " << Ponteiro1;
	std::cout << "\nEndere�o que a vari�vel Ponteiro1 est� carregada na mem�ria = " << &Ponteiro1;

	//Agora Ponteiro2 � um ponteiro para ponteiro e ter� dentro dele o endere�o de Ponteiro1
	int** Ponteiro2 = &Ponteiro1;

	std::cout << "\nValor contido dentro de Ponteiro2 = " << Ponteiro2;
	//Para colocar na tela o valor de Numero utilizando o Ponteiro2, usamos os dois asteriscos **.
	std::cout << "\nValor de Numero via Ponteiro2 = " << **Ponteiro2 << std::endl;

	return 0;
}