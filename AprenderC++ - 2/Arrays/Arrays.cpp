#include <iostream>
#include <string>

int main()
{
	float Notas[5]{ 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	float Media;
	float Soma{0.0f};
	std::string NomeAluno;

	std::cout << "\nDigite o nome do aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota " << (i+1) << ": ";
		std::cin >> Notas[i];
		Soma += Notas[i];
		system("CLS"); // Limpar a tela.
	}

	Media = Soma / 5;

	std::cout << "\nA media das notas do aluno " << NomeAluno << " foi: " << Media << std::endl;

	return 0;
}