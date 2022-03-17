#include "Funcao.h"
#include <string>

int GetChar(std::string palavra, char letra)
{
	std::size_t encontrado = palavra.find_first_of(letra);
	if (encontrado != std::string::npos)
	{
		return encontrado+1;
	}
	else
	{
		return -1;
	}
}
