#include <iostream>
#include <sstream>
#include "Funcao.h"
#include <string>

int main()
{
	std::string Palavra;
	char Letra;
	setlocale(LC_ALL, "PORTUGUESE");

	std::cout << "Digite uma palava: ";
	std::cin >> Palavra;
	std::cout << "Digite uma letra dessa palavra para localizar sua posição: ";
	std::cin >> Letra;

	int Pos = GetChar(Palavra,std::tolower(Letra));

	if (Pos == -1)
	{
		Pos = GetChar(Palavra, std::toupper(Letra));
	}

	std::cout << "\nPalavra -> " << Palavra << '\n';

	std::cout << "Letra '" << (char)std::toupper(Letra) << "' na posicao -> " << Pos << '\n';

	return 0;
}

