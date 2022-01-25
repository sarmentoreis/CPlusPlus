#include <iostream>


float adicao(float num1, float num2);
float subtracao(float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main()
{
	float Num1, Num2;

	setlocale(LC_ALL, "portuguese");

	std::cout << "Digite o primeiro numero: " << '\n';
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: " << '\n';
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operações ***\n";
	std::cout << Num1 << " e " << Num2 << '\n' << std::endl;
	std::cout << "Adição: " << adicao(Num1, Num2) << std::endl;
	std::cout << "Subtracação: " << subtracao(Num1, Num2) << std::endl;
	std::cout << "Multiplicação: " << multiplicacao(Num1, Num2) << std::endl;
	std::cout << "Divisão: " << divisao(Num1, Num2) << std::endl;
	std::cout << std::endl;



	return 0;
}


float adicao(float num1, float num2)
{
	return num1 + num2;
}
float subtracao(float num1, float num2)
{
	return num1 - num2;
}
float multiplicacao(float num1, float num2)
{
	return num1 * num2;
}
float divisao(float num1, float num2)
{
	return num1 / num2;
}