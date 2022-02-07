#include <iostream>
#include <limits>

//Soma de 10 números.

int main()
{
	float Numeros[10]{};
	float Soma{ 0.0f };
	float Minimo = std::numeric_limits<float>::max();
	float Maximo = std::numeric_limits<float>::min();
	


	for (int i = 0; i <= 9; i++)
	{
		std::cout << "Entre com o numero " << (i + 1) << ": ";
		std::cin >> Numeros[i];
		if (Numeros[i] >= Maximo)
		{
			Maximo = Numeros[i];
		}
		if (Numeros[i] < Minimo)
		{
			Minimo = Numeros[i];
		}

		Soma += Numeros[i];
		system("CLS");

	}

	std::cout << "Soma dos numeros: " << Soma << std::endl;
	std::cout << "Maior valor: " << Maximo << '\n';
	std::cout << "Menor valor: " << Minimo << '\n';

	return 0;
}