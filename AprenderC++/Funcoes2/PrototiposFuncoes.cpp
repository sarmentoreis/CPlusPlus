#include <iostream>


/*Informando o cabe�alho da fun��o, permite a execu��o do programa.
  Dessa forma, o compilador consegue enxergar a fun��o soma, chamada na main,
  isso se chama prot�tipo de fun��o.

  Prot�tipo de fun��o serve para indicar para a fun��o main que a fun��o referente ao prot
  existe, mas o c�digo dela est� em um outro lugar.
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