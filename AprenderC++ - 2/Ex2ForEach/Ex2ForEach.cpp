#include <iostream>
#include <array>

int main()
{

	float Notas[]{ 4.9f,9.5f,5.6f,2.5f,9.6f,6.4f,7.5f,9.8f,8.7f,10.0f };
	int Tamanho{ std::size(Notas) };
	float Media{ 0 };

	for (float Nota : Notas)
	{
		Media += Nota;
	}

	std::cout << "Media do aluno: " << Media / Tamanho << '\n';

	return 0;
}