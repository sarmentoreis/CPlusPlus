#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Você pode usar ( ) para inicializar variáveis com valores literais
	//{ } é inicialização uniforme, permite tanto iniciar valores literais (int, float, char, etc)
	//quanto valores escalares (vetores, enums, etc).
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	std::string Texto{ "Vou aprender C++" };

	std::printf("Valor número inteiro = %d \n", NumeroInteiro);
	std::printf("Valor número real = %.2f \n", NumeroReal);

	std::printf("\nValor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());

	std::cout << "Texto da String: " << Texto << '\n';

	std::printf("O valor do caractere digitado: %c na tabela ASCII é: %d \n", Caractere, Caractere);

	return 0;
}