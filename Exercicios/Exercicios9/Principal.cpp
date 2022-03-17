#include <iostream>
#include "Rotina.h"

int main()
{
	/* Ex 13 e 14:
	* Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.
	* Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.
	*/

	char VetorChar[10]{'_','_','_','_','_','_','_','_','_','_'};
	int length = sizeof(VetorChar);
	char Letra;
	int Pos;

	setlocale(LC_ALL, "PORTUGUESE");
	for (int i = 0; i < length; i++)
	{
		PercorreVetor(VetorChar, length);
		std::cout << "\nEntre com o caractere " << (i + 1) << " ou digite '/' para finalizar: ";
		std::cin >> Letra;
		if (Letra != '/')
		{
			VetorChar[i] = Letra;
			system("CLS");
		}
		else
		{
			break;
		}
	}

	system("CLS");
	do
	{
		PercorreVetor(VetorChar, length);
		std::cout << "\nDigite a posição do caractere a ser excluido (1 a 10) ou digite '99' para finalizar: ";
		std::cin >> Pos;
		DeleteChar(VetorChar, Pos);
		system("CLS");
	} while (Pos != 99);

	system("CLS");
	do
	{
		PercorreVetor(VetorChar, length);
		std::cout << "\nDigite a posição do caractere a ser substituído (1 a 10): ";
		std::cin >> Pos;
		std::cout << "Digite o caractere a ser inserido na posição " << Pos << " ou digite '/' para finalizar: ";
		std::cin >> Letra;
		InsereChar(VetorChar, Pos, Letra);
		system("CLS");
	} while (Letra != '/');

	std::cout << "\nAté mais!\n";

	return 0;
}