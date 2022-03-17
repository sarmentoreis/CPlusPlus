#include <iostream>
#include "Metodos.h"

int main()
{
	/*Ex 1:
		Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura
		o programa dever� imprimir o n�mero da linha que cont�m o menor dentre todos os n�meros lidos.
	*/
	int Matriz[3][3];

	int Tamanho = std::size(Matriz);
	int Escolha;

	setlocale(LC_ALL, "PORTUGUESE");

	for (int i = 0; i < Tamanho; i++)
	{

		for (int j = 0; j < Tamanho; j++)
		{
			std::cout << "Posi��o " << i << " : " << j << " -> ";
			std::cin >> Escolha;
			Matriz[i][j] = Escolha;
		}

	}

	std::cout << "\n\t Carregando..." << '\n' << std::endl;
	
	for (int i = 0; i < Tamanho; i++)
	{
		for (int j = 0; j < Tamanho; j++)
		{
			std::cout << "Posi��o " << i << " : " << j << " -> " << Matriz[i][j] << '\n';
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

	std::cout << "\n\n\tMaior n�mero -> " << Maior << '\n' << std::endl;
	
	// ----------------------------------------------------------------------------

	/*Ex 2:
	  Escreva um programa que leia 3 notas de um aluno e a m�dia das notas dos exerc�cios realizados por ele.
	  Calcular a m�dia de aproveitamento, usando a f�rmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da m�dia,
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
	  Fa�a o programa que apresenta a seguinte sa�da, perguntando ao usu�rio o n�mero m�ximo (no exemplo, 9).
	  Este n�mero deve ser sempre �mpar.
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
				std::cout << "\nDigite um numero �mpar.\n";
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