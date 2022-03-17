#include <iostream>
#include "Metodos.h"

int main()
{
	/*Ex 1:
		Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura
		o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.
	*/
	int Matriz[3][3];

	int Tamanho = std::size(Matriz);
	int Escolha;

	setlocale(LC_ALL, "PORTUGUESE");

	for (int i = 0; i < Tamanho; i++)
	{

		for (int j = 0; j < Tamanho; j++)
		{
			std::cout << "Posição " << i << " : " << j << " -> ";
			std::cin >> Escolha;
			Matriz[i][j] = Escolha;
		}

	}

	std::cout << "\n\t Carregando..." << '\n' << std::endl;
	
	for (int i = 0; i < Tamanho; i++)
	{
		for (int j = 0; j < Tamanho; j++)
		{
			std::cout << "Posição " << i << " : " << j << " -> " << Matriz[i][j] << '\n';
		}
	}

	int Maior{ -1 };

	for (int i = 0; i < Tamanho; i++)
	{
		for (int j = 0; j < Tamanho; j++)
		{
			if (Matriz[i][j] >= Maior)
			{
				Maior = Matriz[i][j];
			}
		}
	}

	std::cout << "\n\n\tMaior número -> " << Maior << '\n' << std::endl;
	
	// ----------------------------------------------------------------------------

	/*Ex 2:
	  Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
	  Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média,
	  informar o conceito de acordo com a tabela (www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html)
	*/

	float N1, N2, N3, ME;

	std::cout << "Entre com a primeira nota do aluno: ";
	std::cin >> N1;
	std::cout << "Entre com a segunda nota do aluno: ";
	std::cin >> N2;
	std::cout << "Entre com a terceira nota do aluno: ";
	std::cin >> N3;
	ME = (N1 + N2 + N3) / 3;

	float MediaFinal = CalculaMedia(N1,N2,N3,ME);

	MostraSituacao(MediaFinal);

	// ----------------------------------------------------------------------------

	/*Ex 3:
	  Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9).
	  Este número deve ser sempre ímpar.
	*/

	int Selecao[5];
	int length = std::size(Selecao);

	for (int i = 0; i < length; i++)
	{
		do
		{
			std::cout << "\nEntre com um numero de 1 a 9: ";
			std::cin >> Selecao[i];
			if (Selecao[i] % 2 == 0)
			{
				std::cout << "\nDigite um numero ímpar.\n";
			}
			else if (Selecao[i] == 0)
			{
				std::cout << "\nDigite um numero maior que 0.\n";

			}
			else if (Selecao[i] > 9)
			{
				std::cout << "\nDigite um numero menor que 9.\n";

			}

		} while (Selecao[i] % 2 == 0 || Selecao[i] == 0 || Selecao[i] > 9);

	}

	ApresentaSaida(Selecao, length);
	

	return 0;
}