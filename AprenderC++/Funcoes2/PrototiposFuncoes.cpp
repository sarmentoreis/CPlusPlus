#include <iostream>


/*Informando o cabeçalho da função, permite a execução do programa.
  Dessa forma, o compilador consegue enxergar a função soma, chamada na main,
  isso se chama protótipo de função.

  Protótipo de função serve para indicar para a função main que a função referente ao prot
  existe, mas o código dela está em um outro lugar.
*/
float adicao(float num1, float num2);
bool isPar(int num);

int main()
{
	std::cout << adicao(50, 50) << '\n';

	if (isPar(77))
	{
		std::cout << "Numero par" << '\n';
	}
	else
	{
		std::cout << "Numero impar" << '\n';
	}

	return 0;
}




float adicao(float num1, float num2)
{
	return (num1 + num2);
}

bool isPar(int num)
{
	if (num % 2 == 0)
		return true;

	return false;
}