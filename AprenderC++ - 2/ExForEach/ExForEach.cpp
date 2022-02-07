#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "portuguese");

	float Velocidades[]{ 70.9f, 89.5f, 65.6f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f };
	float Media{ 0.0f };
	int Tamanho = sizeof(Velocidades) / sizeof(float);

	for (auto Velocidade : Velocidades)
	{
		Media += Velocidade;
	}

	float Total = Media / Tamanho;

	std::cout << "Média de velocidade da rodovia é " << std::setprecision(4) << Total << "km/h." << std::endl;

	return 0;
}